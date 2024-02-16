import math
def comb(n, r):
    if n < 4:
        return 0
    return math.factorial(n) // math.factorial(r) // math.factorial(n - r)
n = int(input())
print(comb(n, 4))