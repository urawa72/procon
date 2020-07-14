import sys
from heapq import heapify, heappop, heappush

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

k = int(input())
a = [int(i) for i in range(1, 10)]

heapify(a)
while len(a):
    tmp = heappop(a)
    one = tmp % 10
    k -= 1
    # -1,0,+1の範囲で末尾につけてqueueに入れる
    if one != 0: heappush(a, tmp * 10 + one - 1)
    heappush(a, tmp * 10 + one)
    if one != 9: heappush(a, tmp * 10 + one + 1)
    if k == 0:
        print(tmp)
        exit()
