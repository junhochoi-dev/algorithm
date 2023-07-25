def T(x):
    return ((1 + x) * x) // 2

arr = [0 for _ in range(300 + 1)]

for i in range(1, 300 + 1):
    arr[i] = arr[i - 1] + T(i + 1) * i

tc = int(input())

for _ in range(tc):
    n = int(input())
    print(arr[n])