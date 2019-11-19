try:
    while True:
        x = int(input())
        xx = sum([int(_) for _ in str(x)])
        if x == 0:
            break
        for i in range(11,100000+1):
            c = i*x
            s = sum([int(_) for _ in str(c)])
            if s == xx:
                # print(c,'is c')
                print(i)
                break

except Exception as e:
    pass 