N,K = map(int, input().split())
arr = list(map(int, input().split(',')))
for _ in range(K):
    tmp = []
    for i in range(len(arr) - 1):
        tmp.append(arr[i+1] - arr[i])
    arr = tmp
print(*arr, sep=',')