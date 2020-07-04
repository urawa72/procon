import sys
import heapq

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n, m = map(int, input().split())
a = list(map(int, input().split()))
a = list(map(lambda x: x * (-1), a))

heapq.heapify(a)

for _ in range(m):
    tmp = heapq.heappop(a) * (-1)
    tmp //= 2
    heapq.heappush(a, tmp * (-1))

print(-sum(a))
