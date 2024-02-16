tc = int(input())
for _ in range(tc):
    num, parity = map(int, input().split())
    num = str(bin(num)[2:])
    cnt = 0
    for bit in str(num):
        if bit == '1':
            cnt += 1
    cnt %= 2
    print('Valid' if cnt == parity else 'Corrupt')