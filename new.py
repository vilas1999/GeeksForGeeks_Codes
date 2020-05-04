
num = 10
while(True):

    for i in range(1,10):
        if(num%i !=0):
            break
        else:
            print(num)
            exit
    num +=1