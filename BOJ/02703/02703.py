# import sys
# sys.stdin = open('input.txt')

sz = int(input())
for _ in range(sz):
    s = input()
    rule = input()
    ans = ''
    for w in s:
        if w == ' ':
            ans += ' '
        else:
            ans += rule[ord(w) - ord('A')]
    print(ans)