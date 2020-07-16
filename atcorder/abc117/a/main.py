import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

t,x = map(int, input().split())
print('{:.12f}'.format(t / x))
