def norm(l):
	ll=l[0] - l[1]
	for _ in range(len(l)-1):
		if ll != (l[_] - l[_+1]):
			return False
	return True

def per(l):
	l = sorted(l)
	ll=l[0] - l[1]
	for _ in range(len(l)-1):
		if ll != l[_] - l[_+1]:
			return False
	return True


for _ in range(int(input())):
	l=[int(__) for __ in input().split()]
	num = l[0]
	del l[0]
	if norm(l):
		print('arithmetic')
	elif per(l):
		print('permuted arithmetic')
	else:
		print('non-arithmetic')
	

