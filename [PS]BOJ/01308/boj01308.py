from datetime import datetime

today = list(map(int, input().split()))
dday = list(map(int, input().split()))

today1000 = datetime(year=(today[0] + 1000), month=today[1], day=today[2])
today = datetime(year=today[0], month=today[1], day=today[2])
dday = datetime(year=dday[0], month=dday[1], day=dday[2])

if (dday-today).days <= 0 or today1000 <= dday:
    print('gg')
else:
    print(f'D-{(dday-today).days}')