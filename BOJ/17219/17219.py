sza, szq = map(int, input().split())
l = {}
for _ in range(sza):
    address, password = input().split()
    l[address] = password
for _ in range(szq):
    print(l[input()])