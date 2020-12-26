for _ in range(int(input())):
    x = int(input())
    if x == 1:
        print(2)
    elif x == 2:
        print(3)
    elif x == 3:
        print(5)
    else:
        a,b,c = 1,2,0
        t = 0
        for i in range(4,x+1):
            ttt = a 
            a = a + b + c
            b = b * 2
            c = ttt
            a =a %(1000000000+7)
            b = b% (1000000000+7)
            c = c %(1000000000+7)
            # t = a + b + c
            # print(x,a)
        print(( 2**x -(a+b+c) )%(1000000000+7) )
             