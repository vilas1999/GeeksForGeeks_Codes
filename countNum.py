for _ in range(int(input())):
    l,r = map(int,input().split())
    count = 0
    
    if(l%10 <= 2):
        if(r%10 == 9):
            count = ((r//10 - l//10)+1)*3
        
        elif r%10 < 9 and r%10 >= 3:
            count = (((r//10 - l//10)+1)*3)-1
        elif r%10 == 2:
            count = (((r//10 - l//10)+1)*3)-2
        else:

            count = (((r//10 - l//10))*3)
    
    elif  l%10 <= 3:
        if(r%10 == 9):
            count = ((r//10 - l//10)+1)*3 -1
        
        elif r%10 < 9 and r%10 >= 3:
            count = (((r//10 - l//10)+1)*3)-3
        elif r%10 == 2:
            count = (((r//10 - l//10)+1)*3)-2
        else:
            count = (((r//10 - l//10))*3) -1

    elif  l%10 <= 9:

        if(r%10 == 9):
            count = ((r//10 - l//10)+1)*3 - 2
        
        elif r%10 < 9 and r%10 >= 3:

            count = (((r//10 - l//10)+1)*3) - 3 
        
        elif r%10 == 2:
            count = (((r//10 - l//10))*3) - 1
        
        else:
            count = (((r//10 - l//10))*3) -2

    print(max(count,0))
        

            
            
    
    
    
    
