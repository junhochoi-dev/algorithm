tc = int(input())
cnt = 1
for _ in range(tc):
    print(f'Case {cnt}:')
    num = int(input())
    for i in range(1, num):
        if i > 6 or num - i > 6:
            continue
        if i > num - i:
            break
        print(f'({i},{num - i})')
    cnt += 1
