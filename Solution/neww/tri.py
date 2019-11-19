a,b,c = [int(i) for i in input().split()]
if a + b == c:
    print("%d+%d=%d"%(a,b,c))
elif c + b == a:
    print("%d=%d+%d"%(a,b,c))
elif a - b == c:
    print("%d-%d=%d"%(a,b,c))
elif b - c == a:
    print("%d=%d-%d"%(a,b,c))
elif a * b == c:
    print("%d*%d=%d"%(a,b,c))
elif b * c == a:
    print("%d=%d*%d"%(a,b,c))
elif a / b == c:
    print("%d/%d=%d"%(a,b,c))
elif b / c == a:
    print("%d=%d/%d"%(a,b,c))
    
