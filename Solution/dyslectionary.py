l=[]
ll=[]
m = 0
while True:
    try:
        a = input().strip()
        # print(a)
        if a == "":
            ou=[]
            ll.sort()
            for ii in ll:
                f=""
                f = " "*(m-len(ii[1]))+ii[1]
                ou.append(f)
                # print(f)
            l.append(ou)
            ll = []
            m = 0
            continue
            # print(l)
        m = max(len(a),m)
        # print(a)
        ll.append([a[::-1],a])
    except Exception:
        ou=[]
        ll.sort()
        for ii in ll:
            f=""
            f = " "*(m-len(ii[1]))+ii[1]
            ou.append(f)
            # print(f)
        l.append(ou)
        break
p = len(l)
for i in range(p):
    for ii in l[i]:
        print(ii)
    if i != p-1:
        print()