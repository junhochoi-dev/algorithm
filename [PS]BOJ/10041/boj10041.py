W, H, N = map(int, input().split())
route = []
for _ in range(N):
    x, y = map(int, input().split())
    route.append([x, y])

curr_x = route[0][0]
curr_y = route[0][1]

ans = 0
for i in range(1, N):
    next_x = route[i][0]
    next_y = route[i][1]
    if next_x - curr_x > 0  and next_y - curr_y > 0:
        ans += max(next_x - curr_x, next_y - curr_y)
    elif next_x - curr_x < 0  and next_y - curr_y < 0:
        ans += max(curr_x - next_x, curr_y - next_y)
    else:
        ans += abs(next_x - curr_x) + abs(next_y - curr_y)
    curr_x = next_x
    curr_y = next_y

print(ans)