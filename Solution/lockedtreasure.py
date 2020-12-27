import math

def nCr(n,r):
    f = math.factorial
    return f(n) // (f(r) * f(n-r))
for i in range(int(input())):
    a , b = map(int, input().split())
    print(nCr(a, b-1))
