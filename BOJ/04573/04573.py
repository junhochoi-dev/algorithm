menu = 1
while True:
    sz = int(input())
    if sz == 0:
        break
    minimum = 999999999
    D = 0
    for _ in range(sz):
        diameter, price = map(int, input().split())
        if minimum > price / (diameter ** 2):
            minimum = price / (diameter ** 2)
            D = diameter
    print('Menu ', menu, ': ', D, sep='')
    menu += 1