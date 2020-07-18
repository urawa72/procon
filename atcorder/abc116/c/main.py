import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
h = list(map(int, input().split()))

# ans = h[0]
# for i in range(1, n):
#     if h[i - 1] < h[i]:
#         ans += h[i] - h[i - 1]
# print(ans)

ans = 0
active = 0
for i in range(n):
    if active >= h[i]:
        active = h[i]
    else:
        ans += h[i] - active
        active = h[i]
print(ans)
