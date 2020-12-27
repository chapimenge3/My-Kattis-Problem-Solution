from string import digits,ascii_letters,ascii_lowercase
leter = digits[1:] + ascii_lowercase + '0'

for i in range(int(input())):
    x = input()
    s =''
    if '+' in x:
        s = '+'
    if '-' in x:
        s = '-'
    if '*' in x:
        s = '*'
    if '/' in x:
        s = '/'
    x = x.split(s)
    a = x[0].strip()
    x = x[1].split('=')
    b = x[0].strip()
    c = x[1].strip()
    out = ''
    try:
        if len(set(list(a))) == 1 and  len(set(list(b))) == 1 and a[0] == '1':
            sum1 = sum([int(_) for _ in a])
            sum2 = sum([int(_) for _ in b])
            res1 = sum([int(_) for _ in c])
            if eval( str(sum1) + s + str(sum2) ) == res1:
                out +='1'
    except :
        pass
    for i in range(2,37):
        sum_,ssum_= 0,1
        re  = None
        try:
            sum_,ssum_ = int(a,i) , int(b,i)
            re = int(c,i)
        except:
            pass
        res = 0
        if not  sum_ and ssum_:
            continue
        if '+' == s:
            res = sum_ + ssum_
        if '-' == s:
            res = sum_ - ssum_
        if '*' == s:
            res = sum_ * ssum_
        if '/' == s:
            res = sum_ / ssum_
        if re and re == res :
            out += leter[i-1]
    if not out:
        print('invalid')
    else:
        print(out)
