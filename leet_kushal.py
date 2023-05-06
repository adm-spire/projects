a = str(input("enter first string"))
b = str(input("enter second string"))
#x = [i for i in a]
#y = [i for i in b]


#for i in range(0,len(x)):
#    for j in range(0,len(y)):
#        if(x[i] == y[j]):
#            y[j] = 0

chars_a = {}
chars_b = {}
for _ in a :
    if _ in chars_a :
        chars_a[_] += 1
    else :
        chars_a[_] = 1

for _ in b :
    if _ in chars_b :
        chars_b[_] += 1
    else :
        chars_b[_] = 1
flag = True
print(chars_a)
print(chars_b)
for _ in chars_a :
    print(_)
    print("#")
    if _ in chars_b :
        print("!")
        if chars_b[_] < chars_a[_] :
            print("@")
            flag = False
            break
        else :
            print("~")
            print(flag)
            pass
    else :
        print("^")
        flag = False
        break
    print("*",flag)
if flag == True :
    print("string can be regemerated")
else :
    print("cant regenerate")

#if(len(x) == y.count(0)):
#    print("true")

#else:
#    print("false")
