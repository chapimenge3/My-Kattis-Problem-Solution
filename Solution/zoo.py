c = 1
import traceback
while 1:
    x = int(input())
    if x == 0:
        break
    d = dict()
    for i in range(x):
        y = input().split()
        if len(y) == 1:
            y = y[0].lower()
        else:
            y = y[-1].lower()
        try:
            if not  d.__contains__(y):
                d[y] = 1
            else:
                d[y] +=1
        except IndexError as e :
            pass
            # traceback.print_exc()
    l = []
    for i in d:
        l.append([ i, d[i] ])
    l.sort()
    print("List ",c,":",sep='')
    for i in l:
        print(i[0],'|',i[1])
    c+=1