import sys
while True:
	c=0
	x = [i for i in input().split()]
	if list('0'*len(x)) == x:
		sys.exit()
	y = x[2:]
	x = x[:2]
	x = "".join(x)
	y = "".join(y)
	if x in ["12","21"] and y in ["12","21"]:
		print("Tie.")
	elif x in ["12","21"] and y not  in ["12","21"]:
		print("Player 1 wins.")
	elif x not  in ["12","21"] and y in ["12","21"]: 
		print("Player 2 wins.")
	elif x[0]==x[1] and y[0]==y[1]:
		if int(x) > int(y):
			print("Player 1 wins.")
		elif int(x)<int(y):
			print("Player 2 wins.")
		else:
			print("Tie.")
	elif x[0]==x[1] and y[0]!=y[1]:
		print("Player 1 wins.")
	elif x[0]!=x[1] and y[0]==y[1]:
		print("Player 2 wins.")
	else:
		x = int("".join(sorted([i for i in x],reverse = True)))
		y = int("".join(sorted([i for i in y],reverse = True)))
		if x > y:
			print("Player 1 wins.")
		elif x<y:
			print("Player 2 wins.")
		else:
			print("Tie.")