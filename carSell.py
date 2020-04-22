for i in range(int(input())):
    t = 0
    n = int(input())
    arr = sorted(map(int,input().split()),reverse=True)
    for i in range(n):
        if(arr[i]>0):
            t += (arr[i]-i)%((10**9)+7)
    
    print(t%((10**9)+7))
