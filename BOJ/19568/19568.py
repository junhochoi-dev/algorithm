import sys
input = sys.stdin.readline

maximum = 0
nn = 0
mm = 0
for i in range(30):
    n = i + 1
    for j in range(30):
        m = j + 1
        if maximum < n * m * (30 - n) * (30 - m):
            maximum = n * m * (30 - n) * (30 - m)
            nn = n
            mm = m

arr = [[0 for i in range(30)] for j in range(30)]

for i in range(nn):
    arr[nn][i] = 1
for i in range(mm):
    arr[i][mm] = nn+1
for i in range(30-nn-1):
    arr[nn][i+16] = (nn + 1) * (mm + 1)
for i in range(30-mm-1):
    arr[i+16][mm] = (nn + 1) * (mm + 1) * nn

for i in range(30):
    for j in range(30):
        print(arr[i][j], end=' ')
    print()
