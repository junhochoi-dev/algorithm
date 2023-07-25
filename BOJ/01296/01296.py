lg=input()
sz=int(input())
max_score = 0
std = 'ZZZZZZZZZZZZZZZZZZZZ'
lg_L = lg.count('L')
lg_O = lg.count('O')
lg_V = lg.count('V')
lg_E = lg.count('E')
for i in range(sz):
    str = input()
    L = lg_L + str.count('L')
    O = lg_O + str.count('O')
    V = lg_V + str.count('V')
    E = lg_E + str.count('E')
    score = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100
    if score > max_score:
        max_score = score
        std = str
    elif score == max_score and std > str:
        std = str
print(std)