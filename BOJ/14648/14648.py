N, query = map(int, input().split())
arr = list(map(int, input().split()))
for _ in range(query):
    q = list(map(int, input().split()))
    if q[0] == 1:
        a, b = q[1], q[2]
        print(sum(arr[a-1:b]))
        arr[a-1], arr[b-1] = arr[b-1], arr[a-1]
    if q[0] == 2:
        a, b, c, d = q[1], q[2], q[3], q[4]
        print(sum(arr[a-1:b]) - sum(arr[c-1:d]))