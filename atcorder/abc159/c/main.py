import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

L = int(input())
print('{:.12f}'.format((L / 3)**3))
