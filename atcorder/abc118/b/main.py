import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,m = map(int, input().split())
cnt = [0] * m
for _ in range(n):
    a = list(map(int, input().split()))
    for i in range(1, len(a)):
        a[i] -= 1
        cnt[a[i]] += 1

ans = 0
for c in cnt:
    if c == n:
        ans += 1
print(ans)
