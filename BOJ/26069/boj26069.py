sz=int(input())
s = set(['ChongChong'])
for i in range(sz):
    s1, s2 = input().split()
    if s1 in s or s2 in s:
        s.add(s1)
        s.add(s2)
print(len(s))