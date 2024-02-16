import sys

def sumN(n):
    return n * (n + 1) // 2
def sumNN(n):
    return n * (n + 1) * (2 * n + 1) // 6
    
sz = int(sys.stdin.readline())
for i in range(sz):
    R, C = map(int, sys.stdin.readline().split())
    if R < C:
        R, C = C, R
    k = R - C
    sum_white = 2*sumNN(C) + 2*(k-1)*sumN(C) + (1-k)*C
    sum_black = 2*sumNN(C) + 2*(k-1)*sumN(C) - k*C
    print(sum_white, sum_black)