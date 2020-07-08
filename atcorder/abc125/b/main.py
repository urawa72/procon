import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
v = list(map(int, input().split()))
c = list(map(int, input().split()))

ans = 0
for bit in range(2**n):
    vsum = 0
    csum = 0
    for i in range(n):
        if (bit & (1 << i)):
            vsum += v[i]
            csum += c[i]
    ans = max(vsum - csum, ans)

print(ans)
