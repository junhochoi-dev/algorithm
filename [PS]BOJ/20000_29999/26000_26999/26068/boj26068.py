sz=int(input())
c=0
for i in range(sz):
    s=input()
    if int(s[2:]) <= 90:
        c+=1
print(c)