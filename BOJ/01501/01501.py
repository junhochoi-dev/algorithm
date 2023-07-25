def tokenize(word):
    if len(word) == 1:
        return word
    token = word[0] + word[-1]
    tmp = sorted(word[1:-1])
    alphabet = [0 for i in range(26)]
    for i in range(len(tmp)):
        alphabet[ord(tmp[i])-ord('a')] += 1
    center = ''
    for i in range(26):
        if alphabet[i] > 0:
            center += chr(ord('a')+i) + str(alphabet[i])
    token += center
    return token

N = int(input())
dict = {}
for _ in range(N):
    key = tokenize(input())
    if key in dict.keys():
        dict[key] += 1
    else:
        dict[key] = 1
M = int(input())
for _ in range(M):
    sum = 1
    key_list = list(input().split())
    for key in key_list:
        key = tokenize(key)
        if key in dict.keys():
            sum *= dict[key]
        else:
            sum = 0
            break
    print(sum)