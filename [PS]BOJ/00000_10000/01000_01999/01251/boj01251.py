s=input()
std=sorted(s)
std=reversed(std)
std=''.join(std)
for i in range(len(s)-1):
    for j in range(i+1,len(s)-1):
        first=s[0:i+1]
        first=reversed(first)
        first=''.join(first)
        second=s[i+1:j+1]
        second=reversed(second)
        second=''.join(second)
        third=s[j+1:]
        third=reversed(third)
        third=''.join(third)
        if std > first+second+third:
            std = first+second+third
print(std)