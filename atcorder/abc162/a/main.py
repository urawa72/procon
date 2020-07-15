import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

s = input()

for i in range(len(s)):
    if s[i] == '7':
        print('Yes')
        exit()
print('No')
