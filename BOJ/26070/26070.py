cnt = 0
cm, pm, hm = map(int, input().split())
c, p, h = map(int, input().split())

t = min(cm, c)
cnt += t
c -= t
cm -= t

t = min(pm, p)
cnt += t
p -= t
pm -= t

t = min(hm, h)
cnt += t
h -= t
hm -= t

p += c // 3
c %= 3
t = min(pm, p)
cnt += t
p -= t
pm -= t

h += p // 3
p %= 3
t = min(hm, h)
cnt += t
h -= t
hm -= t

c += h // 3
h %= 3
t = min(cm, c)
cnt += t
c -= t
cm -= t

p += c // 3
c %= 3
t = min(pm, p)
cnt += t
p -= t
pm -= t

h += p // 3
p %= 3
t = min(hm, h)
cnt += t
h -= t
hm -= t

c += h // 3
h %= 3
t = min(cm, c)
cnt += t
c -= t
cm -= t

print(cnt)