sz = int(input())
candy = list(map(int, input().split()))
odd = []
even = []
for c in candy:
    if c % 2 == 1:
        odd.append(c)
    else:
        even.append(c)
odd = sorted(odd)
even = sorted(even)
if len(even) == 0:
    if len(odd) % 2 == 0:
        print(sum(odd))
    else:
        if len(odd) == 1:
            print(0)
        else:
            print(sum(odd) - odd[0])
else:
    if len(odd) % 2 == 1:
        print(sum(odd) + sum(even) - odd[0])
    else:
        print(sum(odd) + sum(even))
