import sys
from bisect import bisect_left,bisect_right

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

N = int(input())
L = list(map(int, input().split()))
L.sort()

ans = 0
for b in range(N):
    for a in range(b):
        ab = L[a] + L[b]
        r = bisect_left(L, ab)
        l = b + 1
        ans += max(0, r - l)

print(ans)
