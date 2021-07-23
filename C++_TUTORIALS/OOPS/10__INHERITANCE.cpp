/*INHERITANCE IS ALL ABOUT GRABING EVERYTHING FROM ONE CLASS TO ANOTHER*/

/*

In C++, inheritance is a process in which one object acquires all the 
properties and behaviors of its parent object automatically. 
In such way, you can reuse, extend or modify the attributes and 
behaviors which are defined in other class.

In C++, the class which inherits the members of another class is called derived class
and the class whose members are inherited is called base class. 
The derived class is the specialized class for the base class.




Advantage of C++ Inheritance
Code reusability: Now you can reuse the members of your parent class. 
So, there is no need to define the member again. So less code is 
required in the class.



*/





/*

C++ supports five types of inheritance:

Single inheritance
Multiple inheritance
Hierarchical inheritance
Multilevel inheritance
Hybrid inheritance

*/


#include<bits/stdc++.h>
using namespace std;

// mother class is the base class

// daughter class is the derived class


class Mother {
public:
	Mother();
	void sayName();

};



Mother::Mother() {    

}

void Mother::sayName() {
	cout << "hey you himangshu!!" << endl;

}

//--------------------------------------------


// here the daughter class is inherating everything from Mother class except the constructor.


class Daughter: public Mother {

public:
	Daughter();
};
Daughter::Daughter() {

}


//----------------------------------------------------



int main() {

	Mother mom;
	mom.sayName();

	Daughter tina;
	tina.sayName();
}