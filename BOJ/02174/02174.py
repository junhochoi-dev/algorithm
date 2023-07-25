R90 = { 'N': 'E', 'E': 'S', 'S': 'W', 'W': 'N'}
L90 = { 'N': 'W', 'E': 'N', 'S': 'E', 'W': 'S'}
direction = {
    'N': [0, 1],
    'E': [1, 0],
    'S': [0, -1],
    'W': [-1, 0],
}
M, N = map(int, input().split())
sz, order = map(int, input().split())
mp = [[0 for i in range(M+1)] for j in range(N+1)]
robot = {}

for i in range(sz):
    num = i + 1
    x, y, d = input().split()
    x = int(x)
    y = int(y)
    robot[num] = [x, y, d]
    mp[y][x] = num
crash = False
ans = ""
for _ in range(order):
    num, order, rep = input().split()
    num = int(num)
    rep = int(rep)

    if crash:
        continue
    if order == 'F':
        for i in range(rep):

            mp[robot[num][1]][robot[num][0]] = 0
            robot[num][0] += direction[robot[num][2]][0]
            robot[num][1] += direction[robot[num][2]][1]
            x = robot[num][0]
            y = robot[num][1]
            if x < 1 or x > M or y < 1 or y > N:
                ans = "Robot " + str(num) + " crashes into the wall"
                crash = True
                break
            if mp[y][x] != 0:
                ans = "Robot " + str(num) + " crashes into robot " + str(mp[y][x])
                crash = True
                break
            mp[robot[num][1]][robot[num][0]] = num
    else:
        for i in range(rep):
            if order == 'R':
                robot[num][2] = R90[robot[num][2]]
            else:
                robot[num][2] = L90[robot[num][2]]

if crash:
    print(ans)
else:
    print('OK')
