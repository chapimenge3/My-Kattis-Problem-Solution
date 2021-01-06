while 1:
    try:
        x, o, y = input().split()
        if o == "+":
            z = int(x) + int(y)
            print(int(str(z)[-4:]))
        elif o == "*":
            z = int(x) * int(y)
            print(int(str(z)[-4:]))
        else:
            z = pow(int(x), int(y), 10000)
            print(int(str(z)[-4:]))
    except Exception as e:
        break