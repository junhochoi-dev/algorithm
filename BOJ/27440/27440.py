dp = {}
def bfs(num):
    queue = [num]
    while len(queue) != 0:
        n = queue.pop(0)
        if n <= 1:
            break

        if n % 3 == 0:
            if n // 3 in dp.keys():
                if dp[n // 3] > dp[n] + 1:
                    dp[n // 3] = dp[n] + 1
                    queue.append(n // 3)
            else:
                dp[n // 3] = dp[n] + 1
                queue.append(n // 3)
        #
        if n % 2 == 0:
            if n // 2 in dp.keys():
                if dp[n // 2] > dp[n] + 1:
                    dp[n // 2] = dp[n] + 1
                    queue.append(n // 2)
            else:
                dp[n // 2] = dp[n] + 1
                queue.append(n // 2)
        #
        if n - 1 in dp.keys():
            if dp[n - 1] > dp[n] + 1:
                dp[n - 1] = dp[n] + 1
                queue.append(n - 1)
        else:
            dp[n - 1] = dp[n] + 1
            queue.append(n - 1)


num = int(input())
dp[num] = 0
bfs(num)
print(dp[1])