import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

a.sort(reverse=True)
ans = 0
t = n - 1
for i in range(n):
    lim = 2
    if i == 0: lim = 1
    for j in range(lim):
        if t > 0:
            ans += a[i]
            t -= 1

print(ans)
