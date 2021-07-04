#Name:
#ID:


number1=int(input("Enter the first number: "))

#--------- Write your code below this line--------------------------

# input second number

if number1>=100:
    print("Your number is invalid. It must be less than 100! ") 
else:
    number2=int(input("Enter the second number: "))
    if number2<100:
        for i in range(number1,101,5):
            print(i,end=" ")
        print("\n",end='')
        for i in range(number2,101,5):
            print(i,end=" ")
        print("\n",end='')
    else:
        for i in range(number1,101,5):
            print(i,end=" ")
        print("\n",end='')
















#--------- Write your code above this line---------------------------