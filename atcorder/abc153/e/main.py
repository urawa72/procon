import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline
INF = 10**9

# 個数制限なしナップザック問題
h,n = map(int, input().split())
dp = [INF]*(h+1)
dp[0] = 0
for i in range(n):
    a,b = map(int, input().split())
    for j in range(h):
        nj = min(a+j, h)
        dp[nj] = min(dp[nj], dp[j]+b)

print(dp[-1])
