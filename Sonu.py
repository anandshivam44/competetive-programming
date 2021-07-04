#Name:
#ID:


number1=int(input("Enter the first number: "))

#--------- Write your code below this line--------------------------

# input second number
number2=int(input("Enter the second number: "))
# input third number
number3=int(input("Enter the third number: "))

# check if all three numbers are equal
if number1 == number2 and number2 == number3:
    print(number1**(0.5)) # then square root and print

# check hum number1 is greater than number2
elif number1>number2:
    # if difference falls between 2 and 15
    if (number1 - number2) >2 and (number1-number2) <15:
        print(number1%3) # then number1 mod 3 and print
    else:
        print(number2%5) # then number1 mod 5 and print
# in all other conditions
else:
    print(number3//8) # integer divide by 8 and print

















#--------- Write your code above this line---------------------------