def fun():
    print("hello")
    print("funny")
    print("man")
fun()
print("how are you")
fun()
print("how are you")


def great(lang):
    if lang=='es':
        print("Hola")
    elif lang=='fr':
        print("Bonjour")
    else:
        print("Hello")
great('en')
great('es')
great('fr')


# RETURN VALUE
# Often a function will take its arguments ,
# do some computation, and return a value to be
# used as the function call in the calling expression.
# the return keyword is used for this.

def greatest(lang):
    if lang=='es':
        return  "Hola"
    elif lang=='fr':
        return "Bonjour"
    else:
        return "Hello"
print(greatest('en'),'glenn')
print(greatest('es'),'hotel')
print(greatest('fr'), 'Michael')



#MULTIPLE PARAMETERS
#We can define more than one parameter in the function definition
#we simply add more arguments when we callm the function
#we match the number and order of arguments and parameters

def add(a,b):
    added =a+b
    return added

x=add(3,6)
print(x)