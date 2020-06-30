import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

n, k = map(int, input().split())
r, s, p = map(int, input().split())
t = input().rstrip()

memo = [None] * n
ans = 0

for i in range(n):
    if t[i] == 'r':
        if i - k < 0 or (0 <= i - k and memo[i - k] != 'p'):
            ans += p
            memo[i] = 'p'
        elif n <= i + k or (i + k < n and t[i + k] != 's'):
            memo[i] = 'r'
        else:
            memo[i] = 's'

    if t[i] == 's':
        if i - k < 0 or (0 <= i - k and memo[i - k] != 'r'):
            ans += r
            memo[i] = 'r'
        elif n <= i + k or (i + k < n and t[i + k] != 'p'):
            memo[i] = 's'
        else:
            memo[i] = 'p'

    if t[i] == 'p':
        if i - k < 0 or (0 <= i - k and memo[i - k] != 's'):
            ans += s
            memo[i] = 's'
        elif n <= i + k or (i + k < n and t[i + k] != 'r'):
            memo[i] = 'p'
        else:
            memo[i] = 'r'

print(ans)
