s=input()
sum = 0
bar = 0
for pivot in range(len(s)):
    if s[pivot] == '(':
        bar += 1
    else: # ')'
        bar -= 1
        if s[pivot-1] == '(':
            sum += bar
        else:
            sum += 1
print(sum)