from multiprocessing import RLock
import random
n = 1

while(n == 1):
    user_input = str(input("enter rock , paper or scissor"))
    comp_move = random.randint(0,2)
    comp_input = "initial"
    if(comp_move == 0):
        comp_input = "rock"
    elif(comp_move == 1):
        comp_input = "paper"
    elif(comp_move == 2):
        comp_input = "scissor"

#game starts here

    if(user_input == "rock" and  comp_input == "scissor"):
        print("user wins")
        break
    elif(user_input == "scissor" and  comp_input == "paper"):
        print("user wins")
        break
    elif(user_input == "paper" and  comp_input == "rock"):
        print("user wins")
        break
    if(comp_input == "rock" and  user_input == "scissor"):
        print("comp wins")
        break
    elif(comp_input == "scissor" and  user_input == "paper"):
        print("comp wins")
        break
    elif(comp_input == "paper" and  user_input == "rock"):
        print("comp wins")
        break

    else:
        print("draw")
        
    
    print("do you want to continue ? press y/n")
    chk = str(input("y/n"))
    if(chk == "y"):
        n = 1
    elif(chk == "n"):
        n = 0









