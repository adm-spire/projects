n = True
while(n == True):
    alphabet = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y" , "z"]
    print("WELCOME TO CAESER CIPHER")
    print("give shift between 1 and 26")
    message = str(input("enter the message"))
    message2 = str(input("enter encrypted message"))
    x = []
    



    shift1 = int(input("enter the shift you want for encryption"))
    shift2 = int(input("enter the shift you want for decryption"))

    def encrypter(message):
        x = [i for i in message]
        for i in range(0,len(x)):
            if(ord(x[i]) > 96 and ord(x[i]) < 123):
                offset = ord(x[i]) + shift1
                if(offset > 122):
                    offset = offset - 26
                x[i] = chr(offset)
            else:
                print("wrong input")
                break
    
    
        en_msg = ''.join(x)
        return en_msg
        
 
    final = encrypter(message)
    print(final)

    def decrypter(message2):
        
        y = [i for i in message2]
        for i in range(0,len(y)):
            if(ord(y[i]) > 96 and ord(y[i]) < 123):
                offset =  ord(y[i]) - shift2
                diff =  ord(y[i]) - shift2
                
                if(offset < 97):
                    
                    offset = diff + 26
                y[i] = chr(offset)
            else:
                print("wrong input")
                break
    
    
        en_msg = ''.join(y)
        return en_msg


    final2 = decrypter(message2)
    print(final2)

    print("do you want to contine press ? y/n")
    z = str(input("y/n"))
    if(z == "n"):
        n = False
    else:
        n = True




