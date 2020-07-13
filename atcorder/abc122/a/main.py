import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

b = input().rstrip()

if b == 'A':
    print('T')
if b == 'T':
    print('A')
if b == 'C':
    print('G')
if b == 'G':
    print('C')
