a = [
    input()
    for i in range(4)
]


ll = [
    'ABCD',
    'EFGH',
    'IJKL',
    'MNO.'
]

data = {}
for i in range(len(ll)):
    for j in range(len(ll[i])):
        data[ll[i][j]] = (i, j)

s = 0
for i in range(len(a)):
    for j in range(len(a[i])):
        if '.' == a[i][j]:
            continue
        x = abs(i - data[a[i][j]][0] ) 
        y = abs(j - data[a[i][j]][1] )
        # print( a[i][j] , x, y) 
        s += x+y 
print(s)
