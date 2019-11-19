while True:
    a,b=[_ for _ in input().split()]
    if a == '0' and b == '0':
        break
    a=list(a[::-1])
    b=list(b[::-1])
    carrycount = 0
    carry = 0
    for i,j in zip(a,b):
    	carry = int(i) + int(j) + carry
    	if(carry > 9):
    		carrycount += 1
    		carry = 1
    	else:
    		carry = 0
    if len(a) > len(b):
        #print(carry,a)
        for i in range(len(b) , len(a)):
            carry = int(a[i]) + carry
            if carry > 9: 
                carry = 1
                carrycount += 1
            else:
                break
                
    if len(b) > len(a):
        for i in range(len(a) , len(b)):
            carry = int(b[i]) + carry
            if carry > 9: 
                carry = 1
                carrycount+=1
            else:
                break
                
    s="s"
    if carrycount == 1:
        s=""
    if carrycount == 0:
    	print("No carry operation.")
    else:
    	print(carrycount,"carry operation" + s +".")

