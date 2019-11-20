from math import *
for _  in range(int(input())):
    x , y , o , a , b = [__ for __ in input().split()]
    x = int(x) # // gcd(int(x),int(y) )
    y = int(y) #// gcd(int(x) , int(y) )
    a = int(a) #// gcd(int(a)  , int(b))
    b = int(b) #// gcd(int(a)  , int(b))
    aa = 0
    bb = 0
    if o == '+':
        aa = (x*b + a*y)
        bb = y*b
        if aa < 0 and bb < 0 :
            print(-aa//gcd(aa,bb),'/',-bb//gcd(aa,bb) )
        elif bb < 0 :
            print(-aa//gcd(aa,bb),'/', -bb//gcd(aa,bb) )
        else:
            print(aa//gcd(aa,bb),'/',bb//gcd(aa,bb))
    elif o == '-':
        aa = (x*b - a*y)
        bb = y*b
        if aa < 0 and bb < 0 :
            print(-aa//gcd(aa,bb),'/',-bb//gcd(aa,bb) )
        elif bb < 0 :
            print(-aa//gcd(aa,bb),'/', -bb//gcd(aa,bb) )
        else:
            print(aa//gcd(aa,bb),'/',bb//gcd(aa,bb))
    elif o =='*':
        aa = x*a
        bb = y * b
        if aa < 0 and bb < 0 :
            print(-aa//gcd(aa,bb),'/',-bb//gcd(aa,bb) )
        elif bb < 0 :
            print(-aa//gcd(aa,bb),'/', -bb//gcd(aa,bb) )
        else:
            print(aa//gcd(aa,bb),'/',bb//gcd(aa,bb))
    else:
        # print(x,y,a,b)
        aa = x * b
        bb = y * a
        # print(aa,bb)
        if aa < 0 and bb < 0 :
            print(-aa//gcd(aa,bb),'/',-bb//gcd(aa,bb) )
        elif bb < 0 :
            print(-aa//gcd(aa,bb),'/', -bb//gcd(aa,bb) )
        else:
            print(aa//gcd(aa,bb),'/',bb//gcd(aa,bb))
        