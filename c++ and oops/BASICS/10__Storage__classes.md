

## There are five types of storage classes, which can be used in a C++ program

- Automatic
- Register
- Static
- External
- Mutable


# Automatic Storage Class

- It is the default storage class for all local variables. 
- The auto keyword is applied to all local variables automatically.

            {   
            auto int y;  
            float y = 3.45;  
            } 
<br>

- The above example defines two variables with a same storage class, auto can only be used within functions.

<br><br><br><br>

# Register Storage Class

- The register variable allocates memory in register than RAM. 

- Its size is same of register size. It has a faster access than other variables.

- It is recommended to use register variable only for quick access such as in counter.

- **Note: We can't get the address of register variable.**

            register int counter=0;    


<br><br><br><br>


# Static Storage Class

- The static variable is initialized only once and exists till the end of a program. 

- It retains its value between multiple functions call.

- The static variable has the default value 0 which is provided by compiler.



                #include <iostream>  
                using namespace std;  
                void func() {    
                static int i=0; //static variable    
                int j=0; //local variable    
                i++;    
                j++;    
                cout<<"i=" << i<<" and j=" <<j<<endl;    
                }    
                int main()  
                {  
                func();    
                func();    
                func();    
                }


                Output:

                i= 1 and j= 1
                i= 2 and j= 1
                i= 3 and j= 1

<br><br><br><br>

# External Storage Class

- The extern variable is visible to all the programs. It is used if two or more files are sharing same variable or function.

                extern int counter=0;    