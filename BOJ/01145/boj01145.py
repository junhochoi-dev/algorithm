arr = list(map(int, input().split()))
num = 1
while True:
    cnt = 0
    for i in range(len(arr)):
        if num % arr[i] == 0:
            cnt += 1
    if cnt >= 3:
        break
    num += 1
print(num)