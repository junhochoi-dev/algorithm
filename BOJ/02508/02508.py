tc=int(input())
for i in range(tc):
    ar=[]
    cnt = 0
    none = input()
    r,c=map(int,input().split())
    for j in range(r):
        ar.append(input())
    for n in range(r):
        for m in range(c):
            if ar[n][m]=='o':
                if n>=1 and n<=r-2:
                    if ar[n-1][m]=='v' and ar[n+1][m]=='^':
                        cnt+=1
                if m>=1 and m<=c-2:
                    if ar[n][m-1]=='>' and ar[n][m+1]=='<':
                        cnt+=1
    print(cnt)