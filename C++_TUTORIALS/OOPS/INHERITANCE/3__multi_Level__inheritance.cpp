/*

When one class inherits another class which is further inherited by another class, 
it is known as multi level inheritance in C++. 
Inheritance is transitive so the last derived class acquires all 
the members of all its base classes.

*/



#include <iostream>  
using namespace std; 

 class Animal {    // base class
   public:  
 void eat() {   
    cout<<"Eating..."<<endl;   
 }    
   };


   class Dog: public Animal     // inherits animal class
   {    
       public:  
     void bark(){  
    cout<<"Barking..."<<endl;   
     }    
   };  


   class BabyDog: public Dog    // inherit Dog class
   {    
       public:  
     void weep() {  
    cout<<"Weeping...";   
     }    
   };   



int main(void) {

    BabyDog d1;  
    d1.eat();  
    d1.bark();  
     d1.weep();  
     return 0; 
      
}  