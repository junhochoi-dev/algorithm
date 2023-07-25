sz=int(input())
files=list(map(int, input().split()))
cluster=int(input())
cnt = 0
for i in range(sz):
    if files[i] == 0:
        continue
    elif files[i] <= cluster:
        cnt += 1
    elif files[i] % cluster == 0:
        cnt += files[i] // cluster
    else:
        cnt += files[i] // cluster + 1
print(cnt*cluster)