import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

x = int(input())

ans = 0
cnt = x // 500
ans = cnt * 1000

x = x % 500
cnt = x // 5
ans += cnt * 5

print(ans)
