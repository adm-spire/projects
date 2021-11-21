#to validate PAN number using regex
import re
pan_number = input('enter PAN number')
checker = re.search(r'^[a-zA-Z]{5}[0-9]{4}[a-zA-Z]{1}$',pan_number)
if checker:
    print('PAN number is valid')
else:
    print('PAN number is invalid')

