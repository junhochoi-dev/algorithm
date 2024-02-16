import sys
input = sys.stdin.readline

tc = int(input())

for _ in range(tc):
    N, M = map(int, input().split())
    route = dict()
    for i in range(M):
        s, e = map(int, input().split())
        if not s in route.keys():
            route[s] = []
        if not e in route.keys():
            route[e] = []
        route[s].append(e)
        route[e].append(s)
    print(N-1)