import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

h, w, k = map(int, input().split())
s = [list(input()) for _ in range(h)]

ans = 0
for b1 in range(2**h):
    for b2 in range(2**w):
        cnt = 0
        for i in range(h):
            for j in range(w):
                if (b1 & (1 << i) == 0) and (b2 & (1 << j) == 0):
                    if s[i][j] == '#':
                        cnt += 1
        if cnt == k:
            ans += 1

print(ans)
