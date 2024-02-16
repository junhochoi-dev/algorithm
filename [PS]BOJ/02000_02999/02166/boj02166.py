def ccw(s, d):
    x1 = s[0]
    x2 = d[0][0]
    x3 = d[1][0]
    y1 = s[1]
    y2 = d[0][1]
    y3 = d[1][1]
    return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)

def triarea(s, d):
    x1 = s[0]
    x2 = d[0][0]
    x3 = d[1][0]
    y1 = s[1]
    y2 = d[0][1]
    y3 = d[1][1]
    return abs(x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3)*0.5

sz = int(input())
dot = []
for _ in range(sz):
    x, y = map(int, input().split())
    dot.append([x, y])

sum = 0
std = [dot[0][0], dot[0][1]]
for k in range(sz - 2):
    i = k + 1
    if ccw(std, dot[i:i + 2]) > 0:
        sum += triarea(std, dot[i:i + 2])
    elif ccw(std, dot[i:i + 2]) < 0:
        sum -= triarea(std, dot[i:i + 2])
    else:
        pass
print(abs(sum))