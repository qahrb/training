from fractions import Fraction
x = list(map(lambda y: int(y), input().split(" ")))
y = 7 - max(x)
if y == 6:
    print("1/1")
else:
    print(Fraction(y, 6))
# Accepted
# http://codeforces.com/contest/9/submission/47141197