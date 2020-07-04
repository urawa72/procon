import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

s,t = input().split()
a,b = map(int, input().split())
u = input().rstrip()

if u == s:
    a -= 1
elif u == t:
    b -= 1

print(a, b)
