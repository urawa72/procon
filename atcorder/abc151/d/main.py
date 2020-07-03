import sys
from collections import deque

input = sys.stdin.readline
sys.setrecursionlimit(10**7)
inf = 10**17
mod = 10**9+7

# グリッドBFS
h, w = map(int, input().split())
s = [list(input()) for i in range(h)]

dy_dx = [[1,0],[0,1],[-1,0],[0,-1]]

ans = 0
for i in range(h):
    for j in range(w):
        if s[i][j] == '#': continue
        dis = [[-1 for k in range(w)] for k in range(h)]
        dis[i][j] = 0
        d = deque()
        d.append([i, j])
        while len(d):
            now = d.popleft()
            y = now[0]
            x = now[1]
            for k in range(4):
                ny = y + dy_dx[k][0]
                nx = x + dy_dx[k][1]
                if 0 <= ny < h and 0 <= nx < w:
                    if s[ny][nx] != '#' and dis[ny][nx] == -1:
                        dis[ny][nx] = dis[y][x] + 1
                        ans = max([ans, dis[ny][nx]])
                        d.append([ny, nx])

print(ans)
