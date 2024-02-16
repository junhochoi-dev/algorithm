office = set()
sz = int(input())
for _ in range(sz):
    name, state = input().split()
    if state == 'enter':
        office.add(name)
    if state == 'leave':
        office.remove(name)

office = sorted(list(office), reverse=True)

for member in office:
    print(member)