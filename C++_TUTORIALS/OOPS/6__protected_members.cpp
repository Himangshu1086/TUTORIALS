
/*INHERITANCE IS ALL ABOUT GRABING EVERYTHING FROM ONE CLASS TO ANOTHER*/


#include<bits/stdc++.h>
using namespace std;

class Mother {
public:
	int publicvariable;
protected:
	int protectedvariable;
private:
	int privatevariable;

};

//--------------------------------------------


// here the daughter class is inherating everything from Mother class except the constructor.


class Daughter: public Mother {

public:
	void doSomething();

};


// SEE THE OUTPUT COMMENTING THE PRIVATEVARIABLE AS IT CANNOT BE ACCESS.

void Daughter:: doSomething() {
	publicvariable = 365;
	protectedvariable = 270;
	privatevariable = 1;

	cout << publicvariable << " " << protectedvariable << " " << privatevariable   << endl;
}

//----------------------------------------------------



int main() {

	Daughter tina;
	tina.doSomething();
}