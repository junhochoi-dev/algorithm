import math
a, b = map(int, input().split())
c, d = map(int, input().split())
adbc = a * d + b * c
bd = b * d
print(adbc // math.gcd(adbc, bd), bd // math.gcd(adbc, bd))