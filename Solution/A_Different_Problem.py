# Solution for Problem ID: different

# EOF
while True:
    try:
       x , y = map(int, input().split()) # accept two integers
       print(abs(x-y))
    except EOFError:
        break