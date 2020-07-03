import sys

input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

n, w = map(int, input().split())
weight = []
value = []
for _ in range(n):
    x, y = map(int, input().split())
    weight.append(x)
    value.append(y)


dp = [[0] * (w + 1) for j in range(n + 1)]
for i in range(n):
    for j in range(w + 1):
        if j < weight[i]:
            dp[i + 1][j] = dp[i][j]
        else:
            dp[i + 1][j] = max(dp[i][j - weight[i]] + value[i], dp[i][j])
print(dp[n][w])
