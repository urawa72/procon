import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

n = int(input())
s = input()

ans = 0
for i in range(n):
    if s[i] == 'A' and s[i+1] == 'B' and s[i+2] == 'C': ans += 1

print(ans)
