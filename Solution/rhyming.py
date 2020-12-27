cw = input()
cind = []

l = []

for i in range(int(input())):
    l.append(input().split())

for i, w in enumerate(l):
    for j in w:
        if cw.endswith(j):
            cind.append(i)



# print(cind)


for i in range(int(input())):
    x = input()
    got = False
    for ind in cind:
        for j in l[ind]:
            # if i == 2:
            #     print(j , x )
            if x.endswith(j):
                got = True
                break
        if got:
            print("YES")
            break
    if not got :
        print("NO")
