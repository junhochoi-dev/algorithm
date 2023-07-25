import sys
input = sys.stdin.readline
# 1
# 1234567890123
# beta * x + alpha
alpha = 0
beta = 1

num = 1
query = int(input())
for _ in range(query):
    q = list(map(int, input().split()))
    if q[0] == 0:
        alpha += q[1]
    if q[0] == 1:
        alpha *= q[1]
        beta *= q[1]
    if q[0] == 2:
        num += q[1]
    if q[0] == 3:
        print(beta * num + alpha)