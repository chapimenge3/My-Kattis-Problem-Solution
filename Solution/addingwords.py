dc = dict()
dv = dict()

while True:
    try:
        x = [str(_) for _ in input().split()]
        if x[0] == 'clear':
            dc = {}
            dv = {}
        elif x[0] == 'def':
            if dc.__contains__(x[1]):
                a = dc[x[1]]
                dv.pop(a)
            dc[x[1]] = x[2]
            dv[x[2]] = x[1]
        elif x[0] == "calc":
            y = ""
            unk = False
            out = " "
            for i in range(1,len(x)-1,2):
                out += x[i] + " " + x[i+1] + " "
            out = out.strip()
            for i in range(1,len(x)-1,2):
                if i == len(x)-2:
                    if dc.__contains__(x[i]):
                        y += str( dc[ x[i] ] )
                    else:
                        unk = True
                        break
                elif dc.__contains__(x[i]):
                    y += str(dc[x[i]])+x[i+1]
                else:
                    unk = True
                    break
            if unk:
                print(out,"unknown")
                continue
            else:
                res = eval(y)
                if dv.__contains__(str(res)):
                    print( out , dv[str(res)] )
                else:
                    print( out ,"unknown")
    except Exception as e:
        break
    