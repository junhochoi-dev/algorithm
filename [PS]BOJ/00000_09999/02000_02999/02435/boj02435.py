sz,section=map(int,input().split())
arr=list(map(int, input().split()))
cul_sum = []
cul_sum.append(0)
sum = 0
for i in range(len(arr)):
    cul_sum.append(sum+arr[i])
    sum += arr[i]
max_val=-999999999
for i in range(len(cul_sum)-section):
    max_val=max(max_val, cul_sum[i+section]-cul_sum[i])
print(max_val)