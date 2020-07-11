import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

H,W = map(int, input().split())
h,w = map(int, input().split())

print((H - h) * (W - w))
