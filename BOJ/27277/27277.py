sz = int(input())
arr = list(map(int, input().split()))
arr = sorted(arr)
sum = arr[len(arr) - 1]
if len(arr) >= 3:
    if len(arr) % 2 == 0:
        for i in range(len(arr)//2-1):
            sum += arr[len(arr) - 2 -i] - arr[i]
    else:
        for i in range(len(arr)//2):
            sum += arr[len(arr) - 2 - i] - arr[i]
print(sum)