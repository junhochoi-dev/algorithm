import sys
input = sys.stdin.readline

N, A, B, C, D = map(int, input().split())

asum = (N // A) * B
if not N % A == 0:
    asum += B
csum = (N // C) * D
if not N % C == 0:
    csum += D
print(min(asum, csum))
