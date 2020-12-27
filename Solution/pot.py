t,s=int(input()),0
for i in range(t):
    x=int(input())
    s=s+(int(x/10)**(x%10))
print(s)
