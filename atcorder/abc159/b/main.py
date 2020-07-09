import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

s = input().rstrip()
t = s[:len(s)//2]
if s == s[::-1] and t == t[::-1]:
    print("Yes")
else:
    print("No")

# n = len(s)

# t = s[0:(n-1)//2]
# q = s[(n+2)//2:n]

# if s == s[::-1] and t == t[::-1] and q == q[::-1]:
#     print("Yes")
# else:
#     print("No")
