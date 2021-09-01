# C++ Overloading (Function and Operator)

If we create two or more members having the same name but different in number or type of parameter, it is known as C++ overloading. In C++, we can overload:

## C++ Function Overloading
    Function Overloading is defined as the process of having two or more function with the same name, but different in parameters is known as function overloading in C++. In function overloading, the function is redefined by using either different types of arguments or a different number of arguments. It is only through these differences compiler can differentiate between the functions.


**The advantage of Function overloading is that it increases the readability of the program because you don't need to use different names for the same action.**

<br>
<br>

        #include <iostream>    
        using namespace std; 

        class Cal {    
            public:    
        static int add(int a,int b){      
                return a + b;      
            } 

        static int add(int a, int b, int c)      
            {      
                return a + b + c;      
            }      
        };     
        int main(void) {    
            Cal C;                                                    //     class object declaration.   
            cout<<C.add(10, 20)<<endl;      
            cout<<C.add(12, 20, 23);     
        return 0;    
        }  


<br><br>

## C++ Operators Overloading

When a operator is overloaded with multiple jobs(one for adding primitive data type and other for user defined data type) , it is known as operator overloading.




Operator that cannot be overloaded are as follows:

- Scope operator (::)
- Sizeof
- member selector(.)
- member pointer selector(*)
- ternary operator(?:)




            #include <iostream>  
            using namespace std;  
            class A  
            {  
                
                int x;  
                public:  
                A(){}  
                A(int i)  
                {  
                x=i;  
                }  
                void operator+(A);  
                void display();  
            };  
            
            void A :: operator+(A a)  
            {  
                
                int m = x+a.x;  
                cout<<"The result of the addition of two objects is : "<<m;  
            
            }  
            int main()  
            {  
                A a1(5);  
                A a2(4);  
                a1+a2;  
                return 0;  
            } 

            Output:

            The result of the addition of two objects is : 9  