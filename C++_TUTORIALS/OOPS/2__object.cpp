
/*

Object is an instance of a class. All the members of the 
class can be accessed through object.

*/

#include<bits/stdc++.h>
using namespace std;

class Student {

private:
	string name;
	int age;
	int std;

public:
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
    void insert(int age, string name)    
    {    
        age = age;    
        name = name;    
    }  
     void display()    
        {    
            cout<<age<<"  "<<name<<endl;    
        }   

};




int main() {
	Student s1;
	s1.setName("himangshu");
	s1.setAge(18);
	s1.setstd(12);
    s1.insert(34 , "Dercy");
    s1.display();
	cout << s1.getName() << " " << s1.getAge() << " " << s1.getStd() << endl;

}