N = int(input())
M = input()
K = int(input())
M = M.lstrip('0')
if M == '':
    print('YES')
else:
    M = int(M, 2)
    if M % (2 ** K):
        print('NO')
    else:
        print('YES')