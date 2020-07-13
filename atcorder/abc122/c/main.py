import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,q = map(int, input().split())
s = input()
lr = [list(map(int, input().split())) for _ in range(q)]

cnt = [0] * (n)
for i in range(0, n - 1):
    if s[i:i+2] == 'AC':
        cnt[i + 1] = cnt[i] + 1
    else:
        cnt[i + 1] = cnt[i]

for i in range(q):
    ll = lr[i][0] - 1
    rr = lr[i][1] - 1
    print(cnt[rr] - cnt[ll])
