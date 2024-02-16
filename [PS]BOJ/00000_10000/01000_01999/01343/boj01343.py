s = input()
prev = '#'
polynomio = []
cnt_x = 0
cnt_d = 0
for curr in s:
    if prev != curr:
        if curr == 'X':
            if cnt_d != 0:
                polynomio.append(['.', cnt_d])
                cnt_d = 0
            cnt_x += 1
        else:
            if cnt_x != 0:
                polynomio.append(['X', cnt_x])
                cnt_x = 0
            cnt_d += 1
    else:
        if curr == 'X':
            cnt_x += 1
        else:
            cnt_d += 1
    prev = curr

if cnt_d != 0:
    polynomio.append(['.', cnt_d])
if cnt_x != 0:
    polynomio.append(['X', cnt_x])

check = True
out = ''
for target in polynomio:
    if target[0] == 'X':
        if target[1] % 2 == 0:
            out += 'AAAA' * (target[1] // 4)
            out += 'BB' * (target[1] % 4 // 2)
        else:
            check = False
            break
    else:
        out += '.' * target[1]
print(-1 if not check else out)