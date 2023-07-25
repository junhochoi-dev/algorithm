from collections import deque
import sys
N = int(input())
dq = deque()
st = []
for _ in range(N):
    s = sys.stdin.readline().rstrip()
    if s[0] == '1':
        st.append('B')
        dq.append(s[2])
    elif s[0] == '2':
        st.append('F')
        dq.appendleft(s[2])
    else:
        if len(st) == 0:
            continue
        v = st.pop()
        if v == 'B':
            dq.pop()
        else: # v == 'F'
            dq.popleft()
if len(dq) == 0:
    print(0)
else:
    print(*dq, sep='')