num = input()
m = len(input())-1

if len(num) > m :
	cut = len(num)-m
	cutted = num[cut:].strip('0')
	if len(cutted) > 0 :
		print(num[:cut] + '.' + cutted)
	else:
		print(num[:cut])
else:
	print( '0.' + ('0'* (m - len(num) )) + num  ) 