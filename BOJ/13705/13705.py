from decimal import Decimal, getcontext
getcontext().prec = 100
pi = Decimal('3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348')

def radians(x):
    x = Decimal(x)
    return x % (2 * pi)

def factorial(x):
    sumFactorial = Decimal(1)
    for i in range(1, x + 1):
        sumFactorial *= Decimal(i)
    return sumFactorial

def sin(x):
    x = radians(x)
    result = Decimal(0)
    for n in range(50):
        sign = Decimal((-1) ** n)
        numerator = x ** (2 * n + 1)
        denominator = factorial(2 * n + 1)
        result += sign * numerator / denominator
    return result

def fn(x):
    # Ax + Bsin(x) - C = 0
    global A, B, C
    return Decimal(A * x + B * sin(x) - C)

epsilon = Decimal(str(10**(-25)))

A, B, C = map(Decimal, map(int, input().split()))

xl = C / A - 2 * pi
xr = C / A + 2 * pi

xc = fn((xl + xr) / 2)
while not abs(fn(xc)) <= epsilon:
    if fn(xr) * fn(xc) <= 0:
        xl = xc
    else:
        xr = xc
    xc = (xl + xr) / 2

print(f'{xc:.6f}')