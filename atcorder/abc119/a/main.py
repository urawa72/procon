import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

s = input()

if int(s[0:4]) <= 2019:
    if int(s[5:7]) <= 4:
        if int(s[8:]) <= 30:
            print("Heisei")
            exit()

print("TBD")
