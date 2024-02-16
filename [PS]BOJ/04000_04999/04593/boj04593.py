dict = {
    'SR': -1,
    'PS': -1,
    'RP': -1,
    'RR': 0,
    'SS': 0,
    'PP': 0,
    'RS': 1,
    'SP': 1,
    'PR': 1,
}
while True:
    p1 = input()
    p2 = input()
    if p1 == 'E' and p2 == 'E':
        break
    sum_p1 = 0
    sum_p2 = 0
    for i in range(len(p1)):
        if dict[p1[i] + p2[i]] > 0:
            sum_p1 += 1
        elif dict[p1[i] + p2[i]] < 0:
            sum_p2 += 1
    print(f'P1: {sum_p1}')
    print(f'P2: {sum_p2}')