ar=[]
for i in range(4):
    ar.append(int(input()))
if len(set(ar)) == 1:
    print('Fish At Constant Depth')
elif len(set(ar)) == 4:
    if ar == sorted(ar):
        print('Fish Rising')
    elif ar == sorted(ar, reverse=True):
        print('Fish Diving')
    else:
        print('No Fish')
else:
    print('No Fish')

