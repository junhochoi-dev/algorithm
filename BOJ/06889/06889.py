asz = int(input())
bsz = int(input())
a = []
b = []
for _ in range(asz):
    a.append(input())
for _ in range(bsz):
    b.append(input())
for aa in a:
    for bb in b:
        print(f'{aa} as {bb}')