# Python 3.x code to demonstrate star pattern

# Function to demonstrate printing pattern of numbers
def print_pattern(n):
    for i in range(0, n):
        for j in range(0, n-i):
            print(i+1, end=" ")
        print(" ")


n = int(input("enter n: "))
print_pattern(n)
