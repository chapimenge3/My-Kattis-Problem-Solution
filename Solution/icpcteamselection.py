for i in range(int(input())):
    input()
    l = [int(_) for _ in input().split()]
    l.sort()
    s = 0
    while len(l) != 0:
        s += l[-2]
        l.pop()
        l.pop()
        l.pop(0)
    print(s)
        