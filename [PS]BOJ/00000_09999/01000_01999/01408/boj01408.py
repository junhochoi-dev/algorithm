h1,m1,s1=map(int,input().split(':'))
h2,m2,s2=map(int,input().split(':'))
sum = (h2 - h1) * 3600 + (m2 - m1) * 60 + s2 - s1
if sum < 0:
    sum = 3600 * 24 + sum
if sum // 3600 <= 9:
    print(f'0{sum // 3600}:',end='')
else:
    print(f'{sum // 3600}:',end='')

if (sum % 3600) // 60 <= 9:
    print(f'0{(sum % 3600) // 60}:',end='')
else:
    print(f'{(sum % 3600) // 60}:',end='')

if sum % 60 <= 9:
    print(f'0{sum % 60}',end='')
else:
    print(f'{sum % 60}',end='')
