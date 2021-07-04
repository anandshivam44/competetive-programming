DAYS = ['Monday', 'Tuesday', 'Wednesday',
        'Thursday', 'Friday', 'Saturday', 'Sunday']
MONTHS = ['January', 'February', 'March', 'April', 'May', 'June',
          'July', 'August', 'September', 'October', 'November', 'December']

input_list = ['in Monday', 'on Tuesday', 'in 1991', 'at 1991', 'at 13:15', 'in 00:30',
              'on 11.00AM', 'at 3.00PM', 'in 3.00PM', 'on January', 'in December', 'on 6 May', 'in 7 June']


# ------ Write your code BELOW this line ----------------------------------
def check_grammar(lst):
    output_list = []
    for line in lst:
        arr = []
        arr = line.split(' ')

        # clock time
        if '.' in line or ':' in line or 'AM' in arr[1] or 'PM' in line:
            if arr[0] == "at":
                output_list.append(line)

            else:
                temp = 'at ' + arr[1]
                output_list.append(temp)

        # month year

        elif (arr[1] in MONTHS and len(arr) == 2) or (arr[1].isdigit() and len(arr) == 2):
            if arr[0] == 'in':
                output_list.append(line)
            else:
                temp = 'in ' + arr[1]
                output_list.append(temp)

        # days dates
        elif arr[1] in DAYS:
            if arr[0] == 'on':
                output_list.append(line)
            else:
                temp = 'on ' + arr[1]
                output_list.append(temp)
        elif len(arr) == 3:
            if arr[0] == 'on':
                output_list.append(line)
            else:
                temp = 'on ' + arr[1]+" "+arr[2]
                output_list.append(temp)
    # print(output_list)
    return output_list
    pass


# ------ Write your code ABOVE this line ----------------------------------

# ------ Call check_grammar function below --------------------------------
# ------ Write your code BELOW this line ----------------------------------
output_list = check_grammar(input_list)
correct = 0
for i in range(len(output_list)):
    if output_list[i] == input_list[i]:
        correct = correct+1

print("{}/{} correct".format(correct, len(output_list)))

for i in range(len(output_list)):
    if output_list[i] != input_list[i]:
        print("{} -> {}".format(input_list[i], output_list[i]))


# ------ Write your code ABOVE this line ----------------------------------
