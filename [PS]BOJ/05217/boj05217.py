tc = int(input())
for _ in range(tc):
    num = int(input())
    pair = []
    for n in range(num):
        a = n + 1
        if num - a <= a:
            break
        pair.append([a, num - a])
    print(f'Pairs for {num}:', end='')
    for idx in range(len(pair)):
        print(f' {pair[idx][0]} {pair[idx][1]}', end='')
        if idx != len(pair) - 1:
            print(',', end='')
    print()
