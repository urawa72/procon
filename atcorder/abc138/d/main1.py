import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7


n, q = map(int, input().split())
g = [[] for _ in range(n)]
val = [0] * n

for _ in range(n - 1):
    a, b = map(int, input().split())
    a -= 1
    b -= 1
    g[a].append(b)
    g[b].append(a)

for _ in range(q):
    p, x = map(int, input().split())
    val[p - 1] += x

seen = [False] * n
def dfs(v):
    seen[v] = True
    for nv in g[v]:
        if seen[nv]:
            continue
        val[nv] += val[v]
        dfs(nv)

dfs(0)
print(*val)
