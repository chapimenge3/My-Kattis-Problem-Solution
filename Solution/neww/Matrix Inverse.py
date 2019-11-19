c = 1
try:
    while True:
        x,y =[int(_) for _ in input().split()]
        a,b = [int(_) for _ in input().split()]
        det = x*b - y*a
        x,b = b,x
        y,a = -y,-a
        print("Case ",c,":",sep='')
        c += 1
        print("%d %d\n%d %d"%(x/det,y/det,a/det,b/det))
        input()
except Exception as e:
    pass 