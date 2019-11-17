while 1:
    a = input()
    if a == "END":
        break
    if a=="1":
        print(1)
        continue
    c = 1
    z = len(a)
    a = str(len(a))
    
    while z != len(a):
        z = len(a)
        a = str(len(a))
        c+=1
    print(c+1)