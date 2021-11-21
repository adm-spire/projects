#phone number validity checker using regular expression
import re
phonenumber=input('enter your phone number')
checker=re.match(r'^[7|8|9]{1}[\d]{9}',phonenumber)
if checker:
    print('number is valid')
else:
    print('number is invalid')
