def check(num, l):
    for i in l:
        if num % i != 0:
            return False
    return True


while 1:
    min_ = 0
    max_ = -1
    divs = []
    t = int(input())
    if t == 0:
        break
    for _ in range(t):
        sts_ = input()
        sts = sts_.split()
        if "less" in sts_:
            # print("yess")
            if max_ == -1:
                max_ = int(sts[-1])
            else:
                max_ = min(max_, int(sts[-1]))
        elif "greater" in sts_:
            if min_ == -1:
                min_ = int(sts[-1])
            else:
                min_ = max(min_, int(sts[-1]))
        else:
            divs.append(int(sts[-1]))
    # print(f"min {min_} , max {max_}, divs {divs}")
    if max_ == -1:
        print("infinite")
        continue
    nums = []
    for i in range(min_ + 1 , max_ ):
        # print(i, check(i, divs))
        
        if len(divs) :
            if check(i, divs):
                nums.append(i)
        else:
            # print("dssd", i)
            nums.append(i)

    if not nums:
        print("none")
        continue
    else:
        print(*nums)
