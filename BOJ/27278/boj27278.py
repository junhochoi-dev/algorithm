N, M = map(int, input().split())
time = list(map(int, input().split()))
rotate = sum(time)
maximum = 0
tarr = []
for k in range(N):
    if k == 0:
        tarr.append(time[k])
    else:
        tarr.append(time[k] + tarr[-1])

for _ in range(M):
    s,e,t = map(int, input().split())
    intime = 0
    ztos = 0
    ztoe = 0
    if s != 1:
        ztos = tarr[s-2]
    if e != 1:
        ztoe = tarr[e-2]

    if (t - ztos) % rotate == 0:
        intime = t
    elif (t - ztos) % rotate < 0:
        intime = ztos
    else:
        x = (t - ztos) // rotate + 2
        intime = rotate * (x - 1) + ztos

    drivetime = 0
    if s < e:
        drivetime = tarr[e - 2] - ztos
    else:
        if e == 1:
            drivetime = rotate - tarr[s - 2]
        else:
            drivetime = rotate - (tarr[s - 2] - ztoe)
    maximum = max(maximum, intime + drivetime)
print(maximum)