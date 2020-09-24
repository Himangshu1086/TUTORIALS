// A constructor is a  specifial function that
// executed whenever we create a new instance of the class.It is used
// to set initial value of data members of the class.

//	CONSTRUCTOR DONOT RETURN ANY VALUE ,INCLUDING VOID
/*
	CONSTRUCTOR HAVE THE SAME NAME AS THE CLASS
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

};




int main() {
	Student s1;
	/*s1.setName("himangshu");
	s1.setAge(18);
	s1.setstd(12);
	cout << s1.getName() << " " << s1.getAge() << " " << s1.getStd() << endl;
	*/
	cout << s1.getName() << " " << s1.getAge() << " " << s1.getStd() << endl;
}