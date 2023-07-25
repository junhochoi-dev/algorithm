from datetime import datetime
while True:
    d,m,y=map(int, input().split())
    if d==0 and m==0 and y==0: break
    day=datetime(year=y,month=m,day=d)
    std=datetime(year=y,month=1,day=1)
    diff=day-std
    print(diff.days+1)
