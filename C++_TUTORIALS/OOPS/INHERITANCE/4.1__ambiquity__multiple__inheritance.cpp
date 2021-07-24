/*

Ambiguity can be occurred in using the multiple inheritance when
a function with the same name occurs in more than one base class.


*/


/*

#include <iostream>  
using namespace std;  
class A  
{  
    public:  
    void display()  
    {  
        std::cout << "Class A" << std::endl;  
    }  
};  
class B  
{  
    public:  
    void display()  
    {  
        std::cout << "Class B" << std::endl;  
    }  
};  
class C : public A, public B  
{  
    void view()  
    {  
        display();  
    }  
};  
int main()  
{  
    C c;  
    c.display();  
    return 0;  
}  


Output:

error: reference to 'display' is ambiguous
        display();


*/


/*

The above issue can be resolved by using the class resolution operator with the function. 
In the above example, the derived class code can be rewritten as:

class C : public A, public B  
{  
    void view()  
    {  
        A :: display();         // Calling the display() function of class A.  
        B :: display();         // Calling the display() function of class B.  
  
    }  
};  

*/


#include <iostream>  
using namespace std; 

class A  
{  
    public:  
    void display()  
    {  
        std::cout << "Class A" << std::endl;  
    }  
};  


class B  
{  
    public:  
    void display()  
    {  
        std::cout << "Class B" << std::endl;  
    }  
};  


class C : public A, public B  
{  
    void view()  
    {  
       A :: display();         // Calling the display() function of class A.  
        B :: display();         // Calling the display() function of class B.   
    }  
}; 


int main()  
{  
    C c;  
    c.display();  // wrong way
    c.A::display();   // right way
    return 0;  
}  