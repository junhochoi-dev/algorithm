scenario = 0
while True:
    scenario += 1
    girl_cnt = int(input())
    if girl_cnt == 0: break

    girls = []
    for _ in range(girl_cnt):
        girls.append(input())

    log = dict()
    for _ in range(2 * girl_cnt - 1):
        num, val = input().split()
        num = int(num)
        if not num in log:
            log[num] = []
        log[num].append(val)

    for i in range(girl_cnt):
        idx = i + 1
        if not len(log[idx]) == 2:
            print(scenario, girls[idx - 1])
            break