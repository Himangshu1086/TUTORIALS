#variables

a=float(input('Enter the first number : '))
c=input("Enter the operation : ")
if c=='+' or c=='-' or c=='*' or c=='/':
    b=float(input('Enter the second number : '))
else:
    print("! Enter the correct operation !")
    c = input("Enter the operation : ")
    b = float(input('Enter the second number : '))

if c=='+':
    print('result = ',a+b)
elif c=='-':
    print('Result  = ',a-b)
elif c=='*':
    print('Result  = ',a*b)
elif c=='/':
    print('Result  = ',a/b)