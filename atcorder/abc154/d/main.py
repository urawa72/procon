import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,k = map(int, input().split())
p = list(map(int, input().split()))

s = [0] * (n + 1)
for i in range(n):
    # a = p[i] * (p[i] + 1) // 2
    # e = a / p[i]
    e = (p[i] + 1) / 2
    s[i + 1] = s[i] + e

ans = 0
for i in range(n - k + 1):
    ans = max(ans, s[i + k] - s[i])
print('{:.12f}'.format(ans))
