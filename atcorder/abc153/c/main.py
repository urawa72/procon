import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,k = map(int, input().split())
h = list(map(int, input().split()))

ans = 0
h.sort(reverse=True)
for i in h:
    if 0 < k: k -= 1
    else:
        ans += i

print(ans)
