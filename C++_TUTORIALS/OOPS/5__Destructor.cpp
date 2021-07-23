/*
/*

A destructor works opposite to constructor; 
it destructs the objects of classes. 
It can be defined only once in a class. 
Like constructors, it is invoked automatically.


	** DESTRUCTOR CANNOT RETURN A VALUE AND
	   CANNOT ACCEPT A PARAMETER.

	** DESTRUCTOR MUST HAVE THE SAME NAME AS THE CONSTRUCTOR;

	DECLARING A DESTRUCTOR :;

	~CLASSNAME(){
		task to be complete before going out of scope.
	}


*/


#include<bits/stdc++.h>
using namespace std;

class Student {

private:
	string name;
	int age;
	int std;

public:

// ******** DECLARATION OF THE CONSTRUCTOR *****

	Student() {
		printf("Example of the use of the constructor.\nPrint the initial value of the variable in the class.\n\n");
		name = "himangshu ";
		age = 18;
		std = 12;
	}




	void setName(string nameIn) {
		name = nameIn;
	}
	void setAge(int ageIn) {
		age = ageIn;
	}
	void setstd(int stdIn) {
		std = stdIn;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	int getStd() {
		return std;

	}

	~Student() {
		cout << "Destructor is declare" << endl << endl;

	}

};




int main() {
	Student s1;
	s1.setName("himangshu");
	s1.setAge(18);
	s1.setstd(12);
	cout << s1.getName() << " " << s1.getAge() << " " << s1.getStd() << endl;

}