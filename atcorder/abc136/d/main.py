import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

s = input().rstrip()

n = len(s)
ans = [0] * n

rn = ln = 0
for i in range(n):
    if s[i] == 'R': rn += 1
    if s[i] == 'L': ln += 1
    if s[i] == 'L' and (i + 1 < n and s[i + 1] == 'R' or i == n - 1):
        ans[i - ln + 1] = ln - (ln // 2) + (rn // 2)
        ans[i - ln] = rn - (rn // 2) + (ln // 2)
        rn = ln = 0

for i in ans:
    print(i)
