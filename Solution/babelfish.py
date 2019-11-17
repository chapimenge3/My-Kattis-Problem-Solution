l = dict()
while True:
    a = input()
    if a == "":
        break
    a = a.split()
    l[a[1]] = a[0]
try:
    while True:
        a = input().strip()
        if l.__contains__(a):
            print(l[a])
        else:
            print("eh")
except Exception as e:
    pass
