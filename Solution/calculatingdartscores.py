x = int(input())
l = [
    (0, 0, 0),
    (0, 0, 1),
    (0, 0, 2),
    (0, 0, 3),
    (0, 1, 1),
    (0, 1, 2),
    (0, 1, 3),
    (0, 2, 2),
    (0, 2, 3),
    (0, 3, 3),
    (1, 1, 1),
    (1, 1, 2),
    (1, 1, 3),
    (1, 2, 2),
    (1, 2, 3),
    (1, 3, 3),
    (2, 2, 2),
    (2, 2, 3),
    (2, 3, 3),
    (3, 3, 3),
]
a, b, c = 0, 0, 0
a1, b1, c1 = "", "", ""
for i in range(21):
    for j in range(21):
        for k in range(21):
            for o in l:
                if (o[2] * i) + (o[1] * j) + (o[0] * k) == x:
                    a, a1 = i, o[2]
                    b, b1 = j, o[1]
                    c, c1 = k, o[0]
                    s = ""
                    if a != 0 :
                        if a1 == 1:
                            s += "single "
                        elif a1 == 2 :
                            s += "double "
                        else:
                            s += "triple "
                        s += f" {i}\n"
                    if b != 0 :
                        if b1 == 1:
                            s += "single "
                        elif b1 == 2 :
                            s += "double "
                        else:
                            s += "triple "
                        s += f" {j}\n"
                    if c != 0 :
                        if c1 == 1:
                            s += "single "
                        elif c1 == 2 :
                            s += "double "
                        else:
                            s += "triple "
                        s += f" {k}\n"
                    print(s)
                    exit(0)
print("impossible")