import sys
from collections import deque

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
g = [[] for _ in range(n)]
e = []
for _ in range(n - 1):
    a, b = map(int, input().split())
    g[a - 1].append(b - 1)
    e.append(b - 1) # i番目の辺を保持

stack = deque([0])
stack.append(0)
ans = [0 for _ in range(n)]
while stack:
    na = stack.popleft()
    c = 1
    for nb in g[na]:
        if ans[na] == c:
            c += 1
        ans[nb] = c
        c += 1
        stack.append(nb)

print(max(ans))
for i in e:
    print(ans[i])
