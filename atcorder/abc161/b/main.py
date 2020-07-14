import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,m = map(int, input().split())
a = list(map(int, input().split()))

s = sum(a)

cnt = 0
for i in a:
    if i * (4 * m) >= s:
        cnt += 1

if m <= cnt:
    print('Yes')
else:
    print('No')
