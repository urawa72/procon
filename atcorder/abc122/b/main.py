import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

s = input()

ans = 0
tmp = 0
for i in range(len(s)):
    if s[i] == 'A' or s[i] == 'C' or s[i] == 'G' or s[i] == 'T':
        tmp += 1
    else:
        ans = max(ans, tmp)
        tmp = 0

print(ans)
