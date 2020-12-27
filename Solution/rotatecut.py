for _ in range(int(input())):
    x,y = [i for i in input().split()]
    x = int(x)
    rev = 0
    for i in range(x):
        if len(y) < 4:
            break
        
        y = y[::-1]
        rev = 1 if rev == 0 else 0 
        y = y[:-(len(y)//4)]
    if rev:
        print(y[::-1])
    else:
        print(y)
