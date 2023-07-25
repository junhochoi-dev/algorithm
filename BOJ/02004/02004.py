n,r = map(int,input().split())
cntN2 = 0
cntR2 = 0
cntNR2 = 0
cntN5 = 0
cntR5 = 0
cntNR5 = 0
k = 1
while True:
    if n < (5 ** k):
        break
    cntN5 += n // (5 ** k)
    k += 1
k = 1
while True:
    if n < (2 ** k):
        break
    cntN2 += n // (2 ** k)
    k += 1
    
    
k = 1
while True:
    if r < (5 ** k):
        break
    cntR5 += r // (5 ** k)
    k += 1
k = 1
while True:
    if r < (2 ** k):
        break
    cntR2 += r // (2 ** k)
    k += 1
    
    
k = 1
while True:
    if (n - r) < (5 ** k):
        break
    cntNR5 += (n - r) // (5 ** k)
    k += 1
k = 1
while True:
    if (n - r) < (2 ** k):
        break
    cntNR2 += (n - r) // (2 ** k)
    k += 1
    
print(min(cntN5-cntR5-cntNR5, cntN2-cntR2-cntNR2))