import math
N = int(input())
for i in range(1, 10):
    if 10**i < N:
        N //= 10**(i - 1)
        if N % 10 >= 5:
            N //= 10
            N += 1
            N *= 10**i
        else:
            N //= 10
            N *= 10**i
    else: break
print(N)