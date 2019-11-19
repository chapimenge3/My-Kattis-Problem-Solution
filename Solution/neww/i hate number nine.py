
def totalNumber(n): 
	
	return (8 * pow(9, n - 1, 1000000007))%1000000007; 
for i in range(int(input())):
	n = int(input())
	print(totalNumber(n)) 

