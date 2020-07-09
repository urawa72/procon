import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

a,b,x = map(int, input().split())

left = 0
right = 1000000001

while 1 < right - left:
    mid = (right + left) // 2
    keta = len(str(mid))
    sum = a * mid + b * keta
    if sum <= x:
        left = mid
    else:
        right = mid

print(left)
