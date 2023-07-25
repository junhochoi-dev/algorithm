sz = int(input())
arr = list(map(int, input().split()))
res = [0 for i in range(sz)]
for i in range(sz):
    res[arr[i]-1]=arr[i]-(i+1)
for i in range(sz):
    print(res[i])