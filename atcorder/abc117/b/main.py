import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
ll = list(map(int, input().split()))

ma = max(ll)
s = sum(ll) - ma

if ma < s:
    print("Yes")
else:
    print("No")
