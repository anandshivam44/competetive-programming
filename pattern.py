n = 3
five_spaces = "     "
six_spaces = "      "
five_stars = "*****"
six_stars = "******"

for i in range(0, n):
    for j in range(0, n-i-1):
        print(five_spaces, end='')
    print(" o ", six_stars, end='')
    if i != 0:
        print(five_spaces*(i), end='')
    print("*")
    for j in range(0, n-i-1):
        print(five_spaces, end='')
    print("/|\ *", end='')
    print(five_spaces*(i), '   ', '*')
    for j in range(0, n-i-1):
        print(five_spaces, end='')
    print("/ \ *", end='')
    print(five_spaces*(i), '   ', '*')
print("*****"*(n+1), end='')
print("*")
