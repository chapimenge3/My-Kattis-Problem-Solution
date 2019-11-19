for i in range(int(input())):
	sounds = [ i for i in input().split()]
	while True:
		x = input()
		if x == "what does the fox say?":
			break
		x = x.split()
		while x[2] in sounds:
			del sounds[sounds.index(x[2])]
	for j in sounds:
		print(j , end = ' ')