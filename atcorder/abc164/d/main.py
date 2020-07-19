import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

m = 2019
t = input().rstrip()
s = t[::-1]

x = 1
tot = 0
ans = 0
cnt = [0] * (m)
for i in range(len(s)):
    cnt[tot] += 1
    tot += (int(s[i])) * x
    tot %= m
    ans += cnt[tot]
    x = x * 10 % m
print(ans)
