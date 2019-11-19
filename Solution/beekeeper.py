try:
	while True:
		t = int(input())
		if t == 0:
			break
	
		l = []
		word = []
		ind = ['aa','ee','ii','oo','uu','yy']
		for i in range(t):
			x = input()
			jj=[]
			for j in ind :
				jj.append(x.count(j))
			l.append(jj)
			word.append(x)
		m , i = 0,0
		# for i,j in zip(l,word):
		# 	print(i,j)
		for j in range(len(l)):
			if sum(l[j]) > m :
				m = sum(l[j])
				i = j
		print(word[i])
except :
	pass