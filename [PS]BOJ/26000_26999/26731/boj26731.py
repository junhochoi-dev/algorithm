s = input()
alphabet = [0 for _ in range(26)]
for i in range(len(s)):
    alphabet[ord(s[i]) - ord('A')] += 1
for i in range(26):
    if alphabet[i] == 0:
        print(chr(ord('A') + i))
        break