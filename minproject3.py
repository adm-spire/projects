#program to find validity of email using regex
import re
email1 = input('enter email')
checker = re.search(r'^[a-zA-Z0-9]+[\@]{1}[a-zA-Z]+(\.com){1}$',email1)
if checker:
    print('email is valid')
else:
    print('email is invalid')
