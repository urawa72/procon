import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n,a,b = map(int, input().split())

c = n // (a + b)
d = n % (a + b)
if a < d:
    d = a
print(c * a + d)
