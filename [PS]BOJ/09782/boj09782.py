n = 1
while True:
    l = list(map(int, input().split()))
    if l[0] == 0:
        break
    sz = l[0]
    del l[0]
    #l = sorted(l)
    if len(l) % 2 == 0:
        print(f'Case {n}: {(l[sz // 2] + l[sz // 2 - 1]) / 2}')
    else:
        print(f'Case {n}: {l[sz // 2] * 1.0}')
    n += 1