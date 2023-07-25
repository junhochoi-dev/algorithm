def cntfunc(dice, num):
    cnt = 0
    for n in dice:
        if n == num:
            cnt += 1
    return cnt

pedigree = input()
dice = list(map(int, input().split()))

maximum = 0

# ones, twos, threes, fours, fives, sixes
for i in range(6):
    topNum = i + 1
    if pedigree[i] == 'Y':
        maximum = max(maximum, cntfunc(dice, topNum) * topNum + topNum * 2)

# four of a kind
if pedigree[6] == 'Y':
    if dice[0] == dice[1]:
        maximum = max(maximum, dice[0] * 4)
    if dice[1] == dice[2]:
        maximum = max(maximum, dice[1] * 4)
    if dice[2] == dice[0]:
        maximum = max(maximum, dice[2] * 4)

# full house
if dice[0] == dice[1] or dice[1] == dice[2] or dice[2] == dice[0]:
    if pedigree[7] == 'Y':
        if dice[0] == dice[1] and dice[1] == dice[2] and dice[2] == dice[0]:
            if dice[0] == 6:
                maximum = max(maximum, dice[0] * 3 + 10)
            else:
                maximum = max(maximum, dice[0] * 3 + 12)
        else:
            maximum = max(maximum, max(dice) * 3 + min(dice) * 2)
else: # little straight, big straight
    if cntfunc(dice, 1) == 1 and cntfunc(dice, 6) == 1:
        pass
    elif cntfunc(dice, 1) == 1 and pedigree[8] == 'Y':
        maximum = max(maximum, 30)
    elif cntfunc(dice, 6) == 1 and pedigree[9] == 'Y':
        maximum = max(maximum, 30)
    else:
        if pedigree[8] == 'Y':
            maximum = max(maximum, 30)
        if pedigree[9] == 'Y':
            maximum = max(maximum, 30)

# yacht
if pedigree[10] == 'Y':
    if dice[0] == dice[1] and dice[1] == dice[2] and dice[2] == dice[0]:
        maximum = max(maximum, 50)

# choice
if pedigree[11] == 'Y':
    maximum = max(maximum, sum(dice) + 12)

print(maximum)