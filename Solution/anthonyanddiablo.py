from math import *
a,y = [float(_) for _ in input().split()]
s = a/3.14
r = sqrt(s)
p = 2*3.14*r
if p<=y:
    print("Diablo is happy!")
else:
    print("Need more materials!")