import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline
INF = 10**9

# 個数制限なしナップザック問題
h,n = map(int, input().split())

# 二次元配列で
a,b = [],[]
for i in range(n):
    x, y = map(int, input().split())
    a.append(x)
    b.append(y)

dp = [[INF] * (h + 1) for _ in range(n + 1)]
dp[0][0] = 0
for i in range(n):
    for j in range(h + 1):
        if j <= a[i]:
            dp[i + 1][j] = min(dp[i][j], b[i])
        else:
            dp[i + 1][j] = min(dp[i][j], dp[i + 1][j - a[i]] + b[i])
print(dp[n][h])

# 一次元配列で
# dp = [INF]*(h+1)
# dp[0] = 0
# for i in range(n):
#     a,b = map(int, input().split())
#     for j in range(h):
#         nj = min(a+j, h)
#         dp[nj] = min(dp[nj], dp[j]+b)
# print(dp[-1])
