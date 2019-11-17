for ii in range(1, int(input())+1 ):
    input()
    l = [int(_) for _ in input().split()]
    ll =[int(_) for _ in input().split()]
    c = 0
    for i, j in zip(sorted(l),sorted(ll,reverse=True)):
        c += ( i*j)
    print("Case #",ii,': ',c,sep='')