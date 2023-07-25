sz = int(input())
s = input()
if s[:sz//2] == s[sz//2:]:
    print('Yes')
else:
    print('No')