def powpow(x):
    cnt = 0
    while x != 1:
        x //= 2
        cnt += 1
    return cnt

def gamewin(x):
    cnt = 0
    while x >= 2**cnt:
        cnt += 1
    return cnt - 1

N, M, K = map(int, input().split())
maximum = powpow(N)

print(min(maximum, gamewin(K) + M))