import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

a, b = map(int, input().split())

aa = str(a) * b
bb = str(b) * a

if aa < bb: print(aa)
else: print(bb)
