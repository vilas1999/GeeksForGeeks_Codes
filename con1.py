M = (10**9+7)
print(M)
for _ in range(int(input())):
    n,a = map(int,input().split())
    res = 0
    for i in range(1,n+1):
        sum = (2*i)-1
        p = (a**sum)
        res += p%M
        a = (a*(p))
        print(sum,res,a)

    print(res%M)