x = input()
tes = 1
while x!="END":
    c , n = 0,0
    for i in x:
        if i == ".":
            n+=1
        elif i == "*":
            c+=1
        if c==2:
            break
    y = x.split('*')
    nop = True
    for i in range(1,len(y)-1):
        if len(y[i]) != n:
            nop = False
    if nop:
        print(tes,"EVEN")
    else:
        print(tes,"NOT EVEN")
    tes+=1
    x = input()
