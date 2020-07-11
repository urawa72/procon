import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

s = input().rstrip()

if s[2] == s[3] and s[4] == s[5]:
    print("Yes")
else:
    print("No")
