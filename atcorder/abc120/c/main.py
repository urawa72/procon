import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

s = input()

o = 0
z = 0
for i in range(len(s) - 1):
    if s[i] == '0':
        o += 1
    else:
        z += 1

print(min(o, z) * 2)
