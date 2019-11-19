x,y=input().split()
if int(x)==int(y):
    print(int(x)+1)
else:
    for i in range(min(int(x),int(y))+1,max(int(x),int(y))+2):
        print(i)

