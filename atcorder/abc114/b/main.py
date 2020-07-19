import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

s = input()
ans = 753
for i in range(len(s) - 3):
    num = int(s[i:i+3])
    ans = min(ans, abs(num - 753))
print(ans)
