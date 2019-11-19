x = int(input())
for i in range (x):
	av = 0
	s = 0
	l = []
	l = [ int(i) for i in input().split()]
	num = l[0] 
	av = sum(l[1:])/num
	coun = 0
	for j in l[1:]:
		if j > av:
			coun = coun + 1
	print("%.3f" % ((coun * 100)/num),end = "")
	print("%")
