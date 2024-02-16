row = [n for n in range(3000)]
arr = [[0 for n in range(3000)] for m in range(3000)]
N, M, q = map(int, input().split())
for n in range(N):
    arr[n] = list(map(int, input().split()))
for n in range(q):
    s = input()
    if s[0] == '0':
        s, i, j, k = map(int, s.split())
        arr[row[i]][j] = k
    else:
        s, i, j = map(int, s.split())
        row[i], row[j] = row[j], row[i]
for n in range(N):
    for m in range(M):
        print(arr[row[n]][m], end=' ')
    print()