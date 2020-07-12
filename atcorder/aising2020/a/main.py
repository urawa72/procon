import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

l,r, d = map(int, input().split())

ans = 0
for i in range(l, r+1):
    if i % d == 0:
        ans += 1
print(ans)
    
