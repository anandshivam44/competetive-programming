
data = {'Albert Einstein': ['03/14/1879'], 'Sky Brown': ['07/12/2008'], 'Ada Lovelace': ['12/10/1815'], 'Rudy Huxtable': [
    '06/14/2016'], 'Rowan Atkinson': ['01/06/1955'], 'Stephan Hawking': ['01/08/1942']}

for i in data:
    if (2021-int(data[i][0][6:10])) >= 18:
        data[i].append("Adult")
    else:
        data[i].append("child")

name = input("Whose birthday do you want to look up?\n")

if name in data:
    print(name, "'s birthday is ", data[name][0])
else:
    print("Sadly, we don't have", name, "'s birthday.")

# print(data)
