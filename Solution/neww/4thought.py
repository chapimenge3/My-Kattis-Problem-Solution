from math import floor
cha = ['4']
for i in range(3):
    l=[]
    for j in cha:
        l.append(j+' * 4')
        l.append(j+' // 4')
        l.append(j+' + 4')
        l.append(j+' - 4')
    cha = l
result = dict()
for i in cha:
    num = eval(i)
    num = floor(num)
    if num in result:
        result[num].append(i)
    else:
        result[num]=[i]

test = int(input())
for i in range(test):
    x = int(input())
    if x in result:
    	result[x][0]=result[x][0].replace('//','/')
    	print(result[x][0],'=',x)
    else:
        print("No Solution")