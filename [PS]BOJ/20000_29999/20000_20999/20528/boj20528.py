sz = int(input())
s = list(input().split())
bag = set()
for w in s:
    bag.add(w[0])

if len(bag) == 1:
    print(1)
else:
    print(0)