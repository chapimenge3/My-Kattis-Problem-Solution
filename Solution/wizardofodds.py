n,k = [int(_) for _ in input().split()]
if k >350:
    print("Your wish is granted!")
elif 2**k >= n:
    print("Your wish is granted!")
else:
    print("You will become a flying monkey!")