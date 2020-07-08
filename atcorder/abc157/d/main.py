import sys
from collections import deque

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,m,k = map(int, input().split())
f = [[] for _ in range(n)]
g = [[] for _ in range(n)]

for _ in range(m):
    a, b = map(int, input().split())
    a, b = a - 1, b - 1
    f[a].append(b)
    f[b].append(a)

for _ in range(k):
    c, d = map(int, input().split())
    c, d = c - 1, d - 1
    g[c].append(d)
    g[d].append(c)

d = {}
parent = [-1] * n
seen = [False] * n

# DFS
for i in range(n):
    if seen[i]:
        continue
    stack = deque()
    # グループは集合で管理
    d[i] = set([i])
    stack = [i]
    while stack:
        v = stack.pop()
        seen[v] = True
        # 親を設定して同じ連結成分であることを判別する
        parent[v] = i
        for nv in f[v]:
            if seen[nv]:
                continue
            # 集合に追加する
            d[i].add(nv)
            stack.append(nv)

ans = [0] * n
for i in range(n):
    # 連結成分ごとに集合を取り出す
    group = d[parent[i]]
    # 集合の全要素数 - 友達 - ブロック - 自分
    sum = len(group) - len(f[i]) - len(set(g[i]) & group) - 1
    ans[i] = sum

print(*ans)
