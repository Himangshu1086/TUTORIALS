/*

In C++ programming, this is a keyword that refers to the current instance of the class. 
There can be 3 main usage of this keyword in C++.

It can be used to pass current object as a parameter to another method.
It can be used to refer current class instance variable.
It can be used to declare indexers.




To understand ‘this’ pointer, it is important to know how objects look at functions and data members of a class.

Each object gets its own copy of the data member.
All-access the same function definition as present in the code segment.
*/

#include <iostream>  
using namespace std;
  
class Employee {  
   public:  
       int id; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       float salary;  
       Employee(int id, string name, float salary)    
        {    
             this->id = id;    
                                // The 'this' pointer is used to retrieve the object's x
                                // hidden by the local variable 'x'
            this->name = name;    
            this->salary = salary;  
            // id = id;
            // name =name;
            // salary = salary; 
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main(void) {  
    Employee e1 =Employee(101, "Sonoo", 890000); //creating an object of Employee   
    Employee e2=Employee(102, "Nakul", 59000); //creating an object of Employee  
    e1.display();    
    e2.display();    
    return 0;  
}  