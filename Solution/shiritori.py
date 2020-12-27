l = []
m = {}
f = False
for i in range(int(input())):
    x = input()
    if len(l) == 0:
        l.append(x)
        m[x] = 1
    else:
        if l[-1][-1] == x[0] and x not in m:
            l.append(x)
            m[x] = 1
        else:
            print("Player", 2 if i % 2 != 0 else 1, "lost" )
            f = True
            break
if not f:
    print("Fair Game")

