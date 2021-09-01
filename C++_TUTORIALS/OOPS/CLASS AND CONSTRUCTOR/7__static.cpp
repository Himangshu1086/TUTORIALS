/*


C++ static
In C++, static is a keyword or modifier that belongs to the type 
not instance. So instance is not required to access the static 
members. In C++, static can be field, method, constructor, 
class, properties, operator and event.

Advantage of C++ static keyword :
Memory efficient: Now we don't need to create instance for 
accessing the static members, so it saves memory. Moreover, 
it belongs to the type, so it will not get memory each time 
when instance is created.


C++ Static Field :
A field which is declared as static is called static field. 
Unlike instance field which gets memory each time whenever 
you create object, there is only one copy of static field 
created in the memory. It is shared to all the objects.


It is used to refer the common property of all objects such
as rateOfInterest in case of Account, companyName in case of 
Employee etc.



The use of static inside a function is the simplest. 
It simply means that once the variable has been initialized, 
it remains in memory until the end of the program. You can think of 
it as saying that the variable sticks around, maintaining its value, 
until the program completely ends.

*/


#include <iostream>  
using namespace std;  

class Account {  
   public:  
       int accno; //data member (also instance member variable)      
       string name; //data member(also instance member variable) 

       static float rateOfInterest;   // static member variable (also class variable)
        // this does not belong to the object ( instance );
        // only one time is formed.

       Account(int accno, string name)   //constructor
        {    
             this->accno = accno;    
            this->name = name;    
        }    
       void display();   
};  

float Account::rateOfInterest=6.5; // if not define this rateofInterest will not form

void Account :: display()
{
            cout<<accno<< " "<<name<< " "<< rateOfInterest <<endl;   
}

int main(void) {  
    
    Account a1 =Account(201, "Sanjay"); //creating an object of Employee   
    Account a2=Account(202, "Nakul"); //creating an object of Employee  
    a1.display();    
    a2.display();    
    return 0;  
}  



/*

void fun()
{
    static int x ;
    int y ;
}

when the fun is called then y get memory but x get memory at the program start.
memory of x will not get destroy until the program ends
but y memory get destroy when the functions end and again create memory when fun is called

x will have 0 but y will have garbage value


//STATIC MEMBER FUNCTION

class Account{
    private : 
        static int roi;
    public :
        static void setRoi (int r)
        {
            roi = r;
        }

};

main()
{
    Account::setRoi(4); // called without an object
}
setRoi is a static member function .
To access the roi in main function setRoi is required  .This can be called with out an instance 



*/