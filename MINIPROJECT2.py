#program to find validity of URL using regular expression.
import re
url=input('enter URL')
checker = re.match(r'^[https\:\/\/]+[www]+[\.]+[a-zA-Z0-9]+[\.]+[a-zA-Z]$',url)
if checker:
    print('URL',url,'is valid')
else:
    print('URL',url,'is not valid')

    


