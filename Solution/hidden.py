x, y = input().split()

now = x[0] 
ind = 0
ll = len(x)

for i in y:
    if ind >= ll:
        break
    if i == now :
        ind += 1 
        if ind >= ll:
            break
        # print(ind, ll)
        now = x[ind]
    else:
        if i in x[ind:]:
            print("FAIL")
            exit(0)
if ind == ll:
    print("PASS")
else:
    print("FAIL")
            
            
        

