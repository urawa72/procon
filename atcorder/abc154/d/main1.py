import sys
from collections import defaultdict
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,k = map(int, input().split())
p = list(map(int, input().split()))

# 前計算して辞書に保存
d = defaultdict(float)
for i in range(1, 1001):
    j = i
    while 0 < j:
        t = j * (1 / i)
        d[i] += t
        j -= 1

# 累積和
sum = [0.0]*(n+1)
for i in range(n):
    sum[i+1] = sum[i] + d[p[i]]

ans = 0
for i in range(k-1, n+1):
    tmp = sum[i] - sum[i-k]
    ans = max(ans,tmp)

print('{:.12f}'.format(ans))
