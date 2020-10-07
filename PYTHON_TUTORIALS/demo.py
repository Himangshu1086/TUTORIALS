n= int(input("Enter a number : "))

for i in range(1,n+1):
    for j in range(1,i+1):

        print(n-j+1,end=" ")
    for k in range(1,2*n-(2*i-1)):

        print(n-i+1,end=" ")
    for a in range(1,i):
        print(n+a-i+1,end=" ")

    print("\n",end="")

for i in range(1,n):
    for j in range(1,n+1-i):
        print(n+1-j,end=" ")

    for w in range(1,2*i):
        print(i+1,end=" ")

    for s in range(1,n-i+1):
        print(i+s,end=" ")

    print("\n", end="")



