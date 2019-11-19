c=1
try:
	while True:
		l=[int(i) for i in input().split()]
		x=l[0]
		l=l[1:]
		print("Case "+str(c)+':',min(l), max(l),max(l)-min(l))
		c=c+1
except:
	pass