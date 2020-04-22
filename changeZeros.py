def leap():
    year = int(input())

    if (not year % 400):
        print("YES")

    elif(not year % 100):
        print("NO")

    elif(not year % 4):
        print("YES")


leap()