tc = int(input())
for _ in range(tc):
    s = input()
    if not 'D' in s:
        print(len(s))
    else:
        for i in range(len(s)):
            if s[i] == 'D':
                print(i)
                break