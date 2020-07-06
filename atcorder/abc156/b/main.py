import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n, k = map(int, input().split())

cnt = 0
while 0 < n:
    n //= k
    cnt += 1

print(cnt)
