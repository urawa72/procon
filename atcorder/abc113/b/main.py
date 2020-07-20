import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
t, a = map(int, input().split())
h = list(map(int, input().split()))

ans = 1
pre = abs(a * 1000 - (t * 1000 - h[0] * 6))
for i in range(1, n):
    tmp = (t * 1000 - h[i] * 6)
    tmp = abs(a * 1000 - tmp)
    if tmp < pre:
        pre = tmp
        ans = i + 1
print(ans)
