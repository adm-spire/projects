from ast import Break


def checker(number):
    flag = 0
    for i in range(2,number):
        if(number%i == 0):
            flag = 1
            break
    if(flag == 1):
        print("not prime")
    else:
        print("prime")

            
            
    

checker(7)
checker(18)
checker(19)

    
