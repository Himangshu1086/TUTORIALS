#include<bits/stdc++.h>
using namespace std;


//===================== INHERIT FIELD ===============================

class Account
{
    public:
        float salary = 6000;

};


// this means the programmer also inherits the properties of the 
//class Account
// Account is the base class and Programmer is the derived class. 

class Programmer : public Account {
    public:
        float bonus  = 500;
};





//======================INHERIT METHOD ======================


class Animal {

    public :
        void eat ()
        {
            cout  << " is eating.";
        }
};

class Dog : public Animal{

    public:
        string name = "Tommy" ;
};






int main()
{
    //=========INHERIT FILED =============
    cout << "INHERIT FIELD " << endl;
    Programmer p1 ;
    cout << p1.salary << " "<< p1.bonus << endl;
    
    //========== INHERIT METHOD ===============

    cout << " INHERIT METHOD  " << endl;

    Dog d1 ;
    cout << d1.name  ; 
    d1.eat() ;

}

