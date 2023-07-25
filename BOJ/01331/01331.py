visited = [[False for i in range(6)] for j in range(6)]
point = []
for _ in range(36):
    p = input()
    x = ord(p[0]) - ord('A')
    y = int(p[1]) - 1
    point.append([x, y])
    visited[x][y] = True

visited[point[0][0]][point[0][1]] = True
ans = True
point.append([point[0][0], point[0][1]])
for i in range(1, 37):
    prev_x = point[i - 1][0]
    prev_y = point[i - 1][1]
    curr_x = point[i][0]
    curr_y = point[i][1]
    if (abs(prev_x - curr_x) == 2 and abs(prev_y - curr_y) == 1) or (abs(prev_x - curr_x) == 1 and abs(prev_y - curr_y) == 2):
        continue
    else:
        ans = False
        break

for i in range(6):
    for j in range(6):
        if not visited[i][j]:
            ans = False


print('Valid' if ans else 'Invalid')