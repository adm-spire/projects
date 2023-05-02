import random
letters = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y" , "z"]

numbers = ["0","1","2","3","4","5","6","7","8","9"]

special = ["!","@","#","$","%","^","&","*"]

print("WELCOME TO PYPASSWORD GENERATOR")
print("you can have unique 26 letters , 10 digits and 8 special characters")

nr_letter = int(input("enter number of letters you want"))
nr_numbers = int(input("enter no of numbers you want"))
nr_special = int(input("enter number of special characters you want"))
total = nr_letter + nr_numbers + nr_special
chance = []
final = []
k = nr_letter
l = nr_numbers
m = nr_special
for i in range(0,k):
    chance.append(0)
for i in range(0,l):
    chance.append(1)
for i in range(0,m):
    chance.append(2)

random.shuffle(chance)

for i in range(0,total):
    
   
    if(chance[i] == 0):
        y = random.randint(0,len(letters)-1)
        final.append(letters[y])
    elif(chance[i] == 1):
        z = random.randint(0,len(numbers)-1)
        final.append(numbers[z])
    elif(chance[i] == 2):
        w = random.randint(0,len(special)-1)
        final.append(special[w])

string1 = ""
for i in final:
    string1 = string1 + i

print(string1)














