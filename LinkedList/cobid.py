for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))

    mi =  n
    ma = 0
    s=0

    for i in range(1,n):
        if(arr[i]-arr[i-1]) <=2:
            s += 1
        else:
            mi = min([s,mi])
            s = 0
        ma = max(s,ma)
    if mi == n:
        mi = ma
        
    print(mi+1,ma+1)
