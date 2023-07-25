N, M, K = map(int, input().split())
ans = -1
weightSum =0
rain = []
for _ in range(M):
    rain.append(map(int, input().split()))
for i in range(M):
    top, weight = rain[i]
    weightSum += weight
    if weightSum > K:
        ans = i + 1
        break

if ans == -1:
    print(ans)
else:
    print(ans, 1)