import datetime
dict = {'January':1, 'February':2, 'March':3, 'April':4, 'May':5, 'June':6, 'July':7,
        'August':8, 'September':9, 'October':10, 'November':11, 'December':12}
month, day, year, time = input().split()
year = int(year)
month = dict[month]
day = day.rstrip(',')
day = int(day.lstrip('0'))
hour, min = map(int, time.split(':'))

x = (datetime.datetime(year, month, day) - datetime.datetime(year, 1, 1)).days * 24 * 60
x += hour * 60 + min
std = (datetime.datetime(year, 12, 31) - datetime.datetime(year, 1, 1)).days + 1
std *= 24 * 60

print(x / std * 100)