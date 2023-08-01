sz = int(input())
kinds = list(input().split())
N, M = map(int, input().split())
white = False
for i in range(N):
    idx = list(map(int, input().split()))
    allwhite = True
    for j in range(M):
        if kinds[idx[j] - 1] == 'P':
            allwhite = False
    if allwhite:
        white = True
if white:
    print('W')
else:
    print('P')
