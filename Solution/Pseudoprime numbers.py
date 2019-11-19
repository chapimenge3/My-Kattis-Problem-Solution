N = 0
def isPrime(n) : 
    if (n <= 1) : 
        return False
    if (n <= 3) : 
        return True
    if (n % 2 == 0 or n % 3 == 0) : 
        return False
    i = 5
    while(i * i <= n) : 
        if (n % i == 0 or n % (i + 2) == 0) : 
            return False
        i = i + 6
    return True
while True:
    p,a =[int(_) for _ in input().split()]
    if p==0 and a==0:
        break
    if not isPrime(p) and pow(a,p,p) == a:
        print('yes')
    else:
        print('no')
