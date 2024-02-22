T = int(input())
for t in range(T):
    N = int(input())
    ans = [0 for _ in range(7)]
    ans[1] = 1
    for i in range(N):
        tmp = [0 for _ in range(7)]
        order = list(input().split())
        order[1] = int(order[1])
        order[3] = int(order[3])
        for j in range(7):
            if order[0] == '+':
                tmp[(j + order[1]) % 7] += ans[j]
            if order[0] == '*':
                tmp[(j * order[1]) % 7] += ans[j]
            if order[2] == '+':
                tmp[(j + order[3]) % 7] += ans[j]
            if order[2] == '*':
                tmp[(j * order[3]) % 7] += ans[j]
        ans = tmp
    print("UNLUCKY" if ans[0] == 0 else "LUCKY")