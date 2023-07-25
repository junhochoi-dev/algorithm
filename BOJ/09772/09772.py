while True:
    x, y = map(float, input().split())
    if x > 0 and y > 0:
        print('Q1')
    if x < 0 and y > 0:
        print('Q2')
    if x < 0 and y < 0:
        print('Q3')
    if x > 0 and y < 0:
        print('Q4')
    if x == 0 or y == 0:
        print('AXIS')
    if x == 0 and y == 0:
        break