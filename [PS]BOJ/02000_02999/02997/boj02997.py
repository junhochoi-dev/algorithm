l = list(map(int, input().split()))
l = sorted(l)

if l[1] - l[0] == l[2] - l[1]:
    print(l[2] + l[2] - l[1])
else:
    if l[1] - l[0] > l[2] - l[1]:
        print(l[0] + l[2] - l[1])
    else:
        print(l[1] + l[1] - l[0])