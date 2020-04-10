# cook your dish here

t = int(input())
while (t>0):
    n = int(input())
    A = [int(i) for i in input().split()]
    
    lp = -1
    flag = 0
    
    for i in range(n):
        if A[i] == 1:
            if lp == -1:
                lp = i
            elif (i-lp) < 6:
                flag = 1
                break
            else:
                lp = i
    
    if flag:
        print("NO")
    else:
        print("YES")
    t = t-1