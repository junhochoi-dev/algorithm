token = ['<', '>', '&', '|', '(', ')', ' ']

s = input()
ans = []
tmp = ""
i = 0
while i < len(s):
    if s[i] in token:
        if s[i] in ['&', '|']:
            if i < len(s) - 1 and s[i] == s[i + 1]:
                ans.append(tmp)
                tmp = ""
                ans.append(s[i]+s[i+1])
                i += 1
            else:
                tmp = tmp + s[i]
        else:
            ans.append(tmp)
            tmp = ""
            ans.append(s[i])
    else:
        tmp += s[i]
    i += 1

if tmp != "":
    ans.append(tmp)

for x in ans:
    if not x in [' ', '']:
        print(x, end=' ')
