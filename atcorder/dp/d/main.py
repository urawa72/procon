import sys
import numpy as np

input = sys.stdin.readline
sys.setrecursionlimit(10**7)

N, W = map(int, input().split())
weight = []
value = []
for _ in range(N):
    x, y = map(int, input().split())
    weight.append(x)
    value.append(y)

dp = np.zeros((N + 1, W + 1))
for i in range(N):
    for j in range(W + 1):
        if weight[i] <= j:
            dp[i + 1, j] = max(dp[i, j - weight[i]] + value[i], dp[i, j])
        else:
            dp[i + 1, j] = dp[i, j]

print(int(dp[N, W]))
