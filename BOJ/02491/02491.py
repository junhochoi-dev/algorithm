sz = int(input())
arr = list(map(int, input().split()))
szmax = 1
szup = szdown = 1
for i in range(sz - 1):
    if arr[i] <= arr[i + 1]: szup += 1
    else: szup = 1
    if arr[i] >= arr[i + 1]: szdown += 1
    else: szdown = 1
    szmax = max(max(szup, szdown), szmax)
print(szmax)