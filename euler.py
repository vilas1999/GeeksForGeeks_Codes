def check(n):
    n = str(n)
    if(n == "".join(reversed(n))):
        return True
    else:
        return False

num = 0

for i in range(999,99,-1):
    for j in range(999,99,-1):
        print(i,j)
        if(check(i*j)):
            print(1)
            num = max([num,i*j])


print(num)