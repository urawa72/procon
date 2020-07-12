import sys
import math

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

a,b,x = map(int, input().split())

theta = 0
if a * a * b / 2 < x:
    theta = math.atan(2 * (a**2 * b - x) / a**3)
else:
    theta = math.atan((a * b**2) / (2 * x))

deg = math.degrees(theta)

print('{:.10f}'.format(deg))
