/*
 A constructor is a  special method that
 executed whenever we create a new instance of the class.It is used
 to set initial value of data members of the class.

In C++, constructor is a special method which is 
invoked automatically at the time of object creation.

 CONSTRUCTOR DONOT RETURN ANY VALUE ,INCLUDING VOID

 CONSTRUCTOR HAVE THE SAME NAME AS THE CLASS

*/




#include<bits/stdc++.h>
using namespace std;

//================ C++ Default Contructor =====================

/*
	A constructor which has no argument is known as default constructor. 
	It is invoked at the time of creating object.
*/

class Employee  
 {  
   public:  

// ******** DECLARATION OF THE CONSTRUCTOR *****

        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    

		



//====================== C++ Parameterized Constructor ========================

/* 	
	A constructor which has parameters is called parameterized constructor. 
	It is used to provide different values to distinct objects.
*/
		int id;//data member (also instance variable)    
       string name;//data member(also instance variable)
       float salary;
       Employee(int i, string n, float s)  
        {  
            id = i;  
            name = n;  
            salary = s;
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
};  




int main() {
	Employee e1; // creating a object of Employee
	Employee e2; 

	Employee e3 =Employee(101, "Sonoo", 890000); //creating an object of Employee 
    Employee e4=Employee(102, "Nakul", 59000); 
    e3.display();  
    e4.display();  
	return 0;

}