import sys
import math

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

r = int(input())
print('{:.20f}'.format(2 * r * math.pi))
