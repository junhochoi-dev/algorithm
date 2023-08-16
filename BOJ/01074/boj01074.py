import sys
input = sys.stdin.readline
sys.setrecursionlimit(10 ** 6)

def z(n, r, c):
    if n == 0:
        return 0
    std = 2 ** (n - 1)
    if r < std and c < std:
        return z(n - 1, r, c)
    if r < std and c >= std:
        return std ** 2 + z(n - 1, r, c - std)
    if r >= std and c < std:
        return 2 * (std ** 2) + z(n - 1, r - std, c)
    if r >= std and c >= std:
        return 3 * (std ** 2) + z(n - 1, r - std, c - std)

N, r, c = map(int, input().split())
print(z(N, r, c))