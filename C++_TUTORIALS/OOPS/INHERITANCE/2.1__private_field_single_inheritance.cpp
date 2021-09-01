

#include <iostream>  
using namespace std; 

class A  
{  
    protected:
        int a = 4;  
        int b = 5;  
    public:  
    int mul()  
    {  
        int c = a*b;  
        return c;  
    }     
}; 

  
class B : public A  
{  
    public:  
    void display()  
    {  
        int result = mul();  
        std::cout <<"Multiplication of a and b is : "<<result<< std::endl;  
    }  
};  
int main()  
{  
   B b;  
   b.display();  
  cout << b.a; cout <<b.mul(); // this is inaccessible 
                              
    return 0;  
}  



// class A is privately inherited. 
//Therefore, the mul() function of class 'A' cannot be accessed 
//by the object of class B. 
//It can only be accessed by the member function of class B.
//**Private:** When the member is declared as private, it is accessible within the class only.



