import sys
input = sys.stdin.readline

def reverse_word(s):
    ans = ''
    for i in range(len(s)):
        ans = s[i] + ans
    return ans

sz = int(input())
dictionary = []
for _ in range(sz):
    dictionary.append(input().rstrip())
for w in dictionary:
    if reverse_word(w) in dictionary:
        print(len(w), w[len(w)//2])
        break