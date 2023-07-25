tc=int(input())
while tc:
    sz=int(input())
    while sz:
        a,b=map(int,input().split())
        print(a+b,a*b)
        sz-=1
    tc-=1