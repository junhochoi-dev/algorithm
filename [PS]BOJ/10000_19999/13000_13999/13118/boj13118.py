p=list(map(int,input().split()))
x,y,r=map(int,input().split())
idx=0
for i in range(4):
    if(x==p[i]):
        idx=i+1
print(idx)