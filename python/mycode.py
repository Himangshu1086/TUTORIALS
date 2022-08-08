for i in range(0,4):
    for j in range(1,4-i):
            print(" ", end = " ")
    print("*", end =" ")
    for j in range(1,2*i):
            print(" ", end=" ")
    if i==0:
        print(" ",end =" ")
    else:
        print("*",end=" ")
    print()
for i in range(0,4):
    for j in range(1,i+1):
        print(" ", end=" ")
    print("*",end =" ")
    for j in range(1,6-2*i):
        print(" ",end=" ")
    if i==3:
        print(" ",end=" ")
    else:
        print("*",end=" ")
    print()