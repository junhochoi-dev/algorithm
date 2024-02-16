N = int(input())
cheese = list(input().split())
cheese_dict = set()
cnt = 0
for c in cheese:
    if c[len(c) - 6:] == 'Cheese' and not c in cheese_dict:
        cnt += 1
        cheese_dict.add(c)
print('yummy' if cnt >= 4 else 'sad')