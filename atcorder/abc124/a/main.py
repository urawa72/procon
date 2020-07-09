import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

a,b = map(int, input().split())

c = a - 1
d = b - 1

print(max(a + c, b + d, a + b))
