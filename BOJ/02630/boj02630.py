import sys
input = sys.stdin.readline
sys.setrecursionlimit(10 ** 6)

N = int(input())
table = [[[-1]]]
pow = 0
for i in range(1, 8):
    tmp = []
    if 2 ** i == N:
        for _ in range(N):
            tmp.append(list(map(int, input().split())))
        table.append(tmp)
        pow = i
        break
    for j in range(2**i):
        tmp.append([-1 for _ in range(2**i)])
    table.append(tmp)

one = 0
zero = 0

for i in range(pow, -1, -1):
    for n in range(2**i):
        for m in range(2**i):
            if table[i][n][m] == 0:
                zero += 1
                if not 2 ** i == N:
                    zero -= 4
            if table[i][n][m] == 1:
                one += 1
                if not 2 ** i == N:
                    one -= 4
            if n % 2 == 0 and m % 2 == 0:
                std = table[i][n][m]
                if i == 0:
                    continue
                if std == table[i][n + 1][m + 1] and std == table[i][n + 1][m] and std == table[i][n][m + 1]:
                    table[i - 1][n // 2][m // 2] = std

print(zero, one, sep='\n')