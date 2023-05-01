heights = []
sum = 0.0
no = int(input("enter number of students"))
for i in range(0,no):
    sample = float(input("enter height"))
    heights.append(sample)

for j in range(0,no):
    sum = sum + heights[j]


average = sum/no
print(average)
