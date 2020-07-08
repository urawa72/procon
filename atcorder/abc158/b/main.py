import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,a,b = map(int, input().split())

t = n // (a + b)
u = n - (a + b) * t
if a < u:
    u = a
print(t * a + u)
