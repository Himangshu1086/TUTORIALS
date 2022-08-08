#THE TRY / EXCEPT STRUCTURE
#You surround  a dangeroous section of code with try and except
#If the code in the try works - the exceot is skipped
#If the code in the try fails - it jumps to the except section



astr = 'Hello Bob'
try:
    istr = int(astr)
except:
    istr = -1
print("first" , istr)

astr = '123'
try:
    istr = int(astr)
except:
    istr = -1
print("Second",istr)


astr = 'Bob'
try:
    print('hello')
    istr= int(astr)    #this line is false /// #after this line of code execution of further lines of try block stops
    print('there')     #this line will not execute
except:
    istr= -1         #try fails so this block will execute
print('DONE',istr)


##PRACTICAL PROBLEM

num= input("Enter a number : ")
try:
    check = int(num)
except:
    check = -1
if check >1:
    print('Nice Work')
else:
    print('Not a number')
