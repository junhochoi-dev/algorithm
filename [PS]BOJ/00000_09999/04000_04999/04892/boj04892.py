cnt = 0
while True:
    cnt += 1
    n0 = int(input())
    if n0 == 0:
        break
    n1 = 3 * n0
    n2 = n1 // 2 if n1 % 2 == 0 else (n1 + 1) // 2
    n3 = 3 * n2
    n4 = n3 // 9
    n1 = 'even' if n1 % 2 == 0 else 'odd'
    print(f'{cnt}. {n1} {n4}')