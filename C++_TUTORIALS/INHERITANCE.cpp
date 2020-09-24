/*INHERITANCE IS ALL ABOUT GRABING EVERYTHING FROM ONE CLASS TO ANOTHER*/


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