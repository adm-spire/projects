import random

num = []
n = int(input("enter the quantity of numbers you want"))
for i in range(0,n):
    temp = int(input("enter the number"))
    num.append(temp)

for i in range(0,n):
    if(num[i]%3 == 0 and num[i]%5 != 0):
        print(str(i)+" "+"fizz")
    elif(num[i]%5 ==0 and num[i]%3 != 0):
        print(str(i)+" "+"buzz")
    elif(num[i]%5 ==0 and num[i]%3 ==0):
        print(str(i)+" "+"fizzbuzz")
    print("{}".format(random.randint(1,1000)))