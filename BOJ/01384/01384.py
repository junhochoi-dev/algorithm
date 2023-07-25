groupnum = 0
while True:
    groupnum += 1
    sz = int(input())
    if sz == 0:
        break
    mem = []
    nasty = []
    for receiver in range(sz):
        poll = list(input().split())
        mem.append(poll[0])
        poll = poll[1:]
        for sender in range(sz - 1):
            if poll[sender] == 'N':
                nasty.append([(sz + receiver - sender - 1) % sz, receiver])
    print(f'Group {groupnum}')
    if len(nasty) == 0:
        print('Nobody was nasty')
    else:
        for sen in nasty:
            print(f'{mem[sen[0]]} was nasty about {mem[sen[1]]}')
    print()
