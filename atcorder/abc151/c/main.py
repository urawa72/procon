import sys

input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

n, m = map(int, input().split())

ac = [0] * n
wa = [0] * n

acn = 0
wan = 0
for i in range(m):
    p, s = input().split()
    p = int(p)
    p -= 1
    if ac[p] > 0: continue
    if s == 'AC':
        ac[p] = 1
        acn += 1
        wan += wa[p]
    else:
        wa[p] += 1

print(acn, wan)
