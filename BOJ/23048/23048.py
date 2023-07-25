import sys
n = int(sys.stdin.readline())

def isPrime(num):
    i = 2
    while i * i <= num:
        if num % i == 0:
            return False
        i += 1
    return True

color = 1
num = [0 for _ in range(n + 1)]
num[1] = color
for i in range(2, n + 1):
    if isPrime(i):
        color += 1
        t = 1
        while i * t <= n:
            num[i * t] = color
            t += 1
print(max(num))
print(*num[1:])