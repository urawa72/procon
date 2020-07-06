import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

n = int(input())
ans = [0] * 4

for i in range(n):
    s = input().rstrip()
    if s == 'AC': ans[0] += 1
    if s == 'WA': ans[1] += 1
    if s == 'TLE': ans[2] += 1
    if s == 'RE': ans[3] += 1

print('AC x', ans[0])
print('WA x', ans[1])
print('TLE x', ans[2])
print('RE x', ans[3])
