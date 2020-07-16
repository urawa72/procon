import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))
mod = 10**9+7

ans = 0
for i in range(60):
    one = 0
    for a in A:
        if (a & (1 << i) != 0):
            one += 1
    zero = N - one
    now = one * zero % mod
    ans += now * pow(2, i) % mod
    ans %= mod
print(ans)
