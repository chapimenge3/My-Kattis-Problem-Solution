def tob(b,x):
   res = ""
   if x == 0:
      return 0
   while x!=0:
      res += str(x%b)
      x = x//b
   return res[::-1]
try:
    while True:
        b, y ,z = [i for i in input().split()]
        a = int(y,int(b))
        x = int(z,int(b))
        if b == 10:
           print(y%z)
        else:
           m = a%x
           print(tob(int(b),m))
except Exception as  e:
    pass
