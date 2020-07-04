import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

h,a = map(int, input().split())

# 切り上げ
print((h+a-1)//a)
