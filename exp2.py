
marks = [23,45,21,64,28,65,76]
for i in range(0,6):
    if(marks[i] > marks[i+1]):
        x = marks[i+1]
        marks[i+1] = marks[i]
        marks[i] = x

high = marks[-1]
print(high)


