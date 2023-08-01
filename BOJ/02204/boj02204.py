while True:
    sz=int(input())
    if sz==0:
        break
    ar=[]
    lis=[]
    for i in range(sz):
        s=input()
        ar.append(s.upper())
        lis.append(s)
    ar.sort()
    for i in range(sz):
        if ar[0] == lis[i].upper():
            print(lis[i])