for i in range(int(input())):
    a,b,c=[int(_) for _ in input().split()]
    coun=0
    while a <= c:
        a=a*b
        coun+=1
    print(coun)