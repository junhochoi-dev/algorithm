def vitaminString(s1, s2):
    cnt = 0
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            cnt += 1
    return True if cnt == 1 else False

N = int(input())
s = input()
check = False
for sz in range(1, len(s) + 1):
    s1 = s[:sz]
    s2 = s[len(s) - sz:]
    if vitaminString(s1, s2):
        check = True
print('YES' if check else 'NO')