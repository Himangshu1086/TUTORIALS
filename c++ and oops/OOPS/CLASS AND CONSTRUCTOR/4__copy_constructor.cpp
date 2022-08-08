/*

A Copy constructor is an overloaded constructor 
used to declare and initialize an object from another object.

*/

/*
Default Copy constructor: The compiler defines the default copy constructor. 
If the user defines no copy constructor, compiler supplies its constructor.

User Defined constructor: The programmer defines the user-defined constructor.


*/

//Syntax Of User-defined Copy Constructor:

// Class_name(const class_name  &old_object);  

/*
class A  
{  
    A(A &x) //  copy constructor.  
   {  
       // copyconstructor.  
   }  
}   
*/

#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
        int x;
        A(int a)
        {
            x = a;      //parameterized constructor
        }


        // COPY CONSTRUCTOR
        A( A &i)
        {
            x = i.x;
        }

};


int main()
{
    A a1(20);  //calling the parameterised constructor
    A a2(a1);  // calling the copy constructor 

    cout<< a2.x << endl;
    return 0;


}