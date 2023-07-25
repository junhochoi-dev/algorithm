record = []
for _ in range(8):
    record.append(input().split())

record = sorted(record)
rsum = 0
bsum = 0

score =[10, 8, 6, 5, 4, 3, 2, 1]
for i in range(8):
    if record[i][1] == 'B':
        bsum += score[i]
    else:
        rsum += score[i]

if bsum > rsum:
    print('Blue')
else:
    print('Red')