import sys
input = sys.stdin.readline

m2c4 = 229 * 324 * (0.001 ** 2)
m2a3 = 297 * 420 * (0.001 ** 2)
m2a4 = 210 * 297 * (0.001 ** 2)
c4, a3, a4 = map(int, input().split())

print(f'{c4 * m2c4 * 2 + a3 * m2a3 * 2 + a4 * m2a4:.6f}')