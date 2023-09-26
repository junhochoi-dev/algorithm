sz = int(input())
vote = list(map(int, input().split()))

approve = 0
reject = 0
invalid = 0
for v in vote:
    if v == 0:
        invalid += 1
    if v == 1:
        approve += 1
    if v == -1:
        reject += 1
if len(vote) // 2 + 1 <= invalid and len(vote) % 2 == 1:
    print('INVALID')
elif len(vote) // 2 <= invalid and len(vote) % 2 == 0:
    print('INVALID')
else:
    if reject >= approve:
        print('REJECTED')
    else:
        print('APPROVED')