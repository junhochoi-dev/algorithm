import math
def combination(n, r):
    return math.factorial(n) // math.factorial(n-r) // math.factorial(r)

def nsz1cnt(n):
    sum = 0
    for k in range(n):
        i = k + 1
        sum += i * combination(n, i)
    return sum

def binaryCnt(num):
    s = bin(num)[2:]
    sum = 0
    for w in s:
        if w == '1':
            sum += 1
    cnt1 = 0
    for i in range(len(s)):
        if s[i] == '1':
            sum += cnt1 * 2 ** (len(s) - i - 1) + nsz1cnt(len(s) - i - 1)
            cnt1 += 1
    return sum

A, B = map(int, input().split())

if A == B:
    s = bin(A)[2:]
    sum = 0
    for w in s:
        if w == '1':
            sum += 1
    print(sum)
else:
    print(binaryCnt(B) - binaryCnt(A - 1))