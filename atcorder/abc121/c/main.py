import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,m = map(int, input().split())
li = [list(map(int, input().split())) for _ in range(n)]

s = 0
for i in sorted(li):
    if i[1] <= m:
        m -= i[1]
        s += i[0] * i[1]
    else:
        s += i[0] * m
        break
print(s)
