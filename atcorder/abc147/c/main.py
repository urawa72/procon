import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
xy = [[] for _ in range(n)]
for i in range(n):
    a = int(input())
    xy[i] = [[] for _ in range(a)]
    for j in range(a):
        x, y = map(int, input().split())
        x -= 1
        xy[i][j].append(x)
        xy[i][j].append(y)

# bit全探索
ans = 0
for bit in range(2**n):
    flag = True
    for i in range(n):
        if bit & (1 << i):
            for j in xy[i]:
                x = j[0]
                y = j[1]
                b = bit & (1 << x)
                if (b and y) or (b == 0 and y == 0):
                    continue
                else:
                    flag = False
                    break
        if not flag:
            break
    if flag:
        # bitの1をカウント
        ans = max(ans, bin(bit).count('1'))
print(ans)
