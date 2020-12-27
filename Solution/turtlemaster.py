grid = []
for i in range(8):
    grid.append(list(input()))

grid = grid[::-1]
dir = 'ea'
x = 0
y = 0
cmd = list(input())
bo = True
for i in cmd:
    #print(x,y,sep="**")
    if i=='F': 
        if dir == 'ea':
            #print(grid[x+1][y])
            if x==7:
                bo =False
                break
            elif grid[y][x+1] == 'I' or grid[y][x+1] == 'C':
                bo = False
                break
            x+=1
        elif dir == 'we':
            if x==0:
                bo =False
                break
            elif grid[y][x-1] == 'I' or grid[y][x-1] == 'C':
                bo = False
                break
            x-=1
        elif dir == 'so':
            if y==0:
                bo =False
                break
            elif grid[y-1][x] == 'I' or grid[y-1][x] == 'C':
                bo = False
                break
            y-=1
        elif dir == 'no':
            if y==7:
                bo =False
                break
            elif grid[y+1][x] == 'I' or grid[y+1][x] == 'C':
                bo = False
                break
            y+=1
    elif i=='L':
        if dir=='we':
            dir = 'so'
        elif dir=='so':
            dir = 'ea'
        elif dir=='ea':
            dir = 'no'
        elif dir == 'no':
            dir = 'we'
    elif i == 'R':
        if dir=='we':
            dir = 'no'
        elif dir=='no':
            dir = 'ea'
        elif dir=='ea':
            dir = 'so'
        elif dir=='so':
            dir = 'we'
    elif i == 'X':
        if dir == 'ea':
            if x==7:
                bo =False
                break
            elif grid[y][x+1] == 'I':
                grid[y][x+1] = '.'
            else:
                bo = False
                break
        elif dir == 'we':
            if x==0:
                bo =False
                break
            elif grid[y][x-1] == 'I':
                grid[y][x-1]= '.'
            else:
                bo=False
                break    
        elif dir == 'so':
            if y==0:
                bo =False
                break
            elif grid[y-1][x] == 'I':
                grid[y-1][x] = '.'
            else:
                bo = False
                break
        elif dir == 'no':
            if y==7:
                bo =False
                break
            elif grid[y+1][x] == 'I':
                grid[y+1][x] = '.'
            else:
                bo = False
                break

if not bo:
    print("Bug!")
elif grid[y][x]=='D':
    print("Diamond!")
else:
    print("Bug!")
