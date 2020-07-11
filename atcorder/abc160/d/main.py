import sys
from collections import deque

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,x,y = map(int, input().split())

g = [[] for _ in range(n)]

for i in range(1, n):
    a = i - 1
    b = i
    g[a].append(b)
    g[b].append(a)
x -= 1
y -= 1
g[x].append(y)
g[y].append(x)

# BFSによる距離計算
ans = [0] * n
for i in range(n):
    stack = deque()
    dis = [0] * n
    seen = [False] * n
    stack = deque()
    stack.append(i)
    seen[i] = True
    while stack:
        v = stack.popleft()
        for nv in g[v]:
            if seen[nv]:
                continue
            dis[nv] = dis[v] + 1
            seen[nv] = True
            stack.append(nv)
    for j in range(n):
        ans[dis[j]] += 1

# (1,2)(2,1)を重複して数えているので2で割る
for i in range(1, n):
    print(ans[i] // 2)
