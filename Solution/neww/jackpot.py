from math import *
import sys
for _ in range(int(input())):
    input()
    l = [int(__) for __ in input().split()]
    x = 1
    ll = 0
    b = False
    for i in l:
        ll = (x*i)//gcd(x,i)
        x = ll 
        if ll >1e9:
            print("More than a billion.")
            break
    else:
        print(ll)