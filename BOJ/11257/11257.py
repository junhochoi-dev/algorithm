sz=int(input())
for i in range(sz):
    n,s,m,t=map(int,input().split())
    print(n,s+m+t,end=' ')
    if s+m+t>=55 and s>=35*0.3 and m>=25*0.3 and t>=40*0.3:
        print('PASS')
    else:
        print('FAIL')