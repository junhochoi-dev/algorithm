n,m=map(int, input().split())
if(n%2==0 or m%2==0):
    print(0)
else:
    print(min(n,m))