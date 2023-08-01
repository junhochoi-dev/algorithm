sz=int(input())
time_curr = 1
reverse = False
for _ in range(sz):
    item, time_card = input().split()
    time_card = int(time_card)

    print(time_curr, end=' ')

    if time_card == time_curr and item == 'HOURGLASS':
        print('NO')
        if reverse:
            if time_curr == 1:
                time_curr = 12
            else:
                time_curr -= 1
        else:
            if time_curr == 12:
                time_curr = 1
            else:
                time_curr += 1
        continue
    else:
        if time_card == time_curr: print('YES')
        else: print('NO')

        if item == 'HOURGLASS':
            reverse = not reverse
        if reverse:
            if time_curr == 1:
                time_curr = 12
            else:
                time_curr -= 1
        else:
            if time_curr == 12:
                time_curr = 1
            else:
                time_curr += 1
