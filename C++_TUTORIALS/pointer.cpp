#include<bits/stdc++.h>
using namespace std;

int main() {

	int age = 19;

	string name = "himangshu";

	int *pAge = &age;    // initialization of pointers


	string *Myname = &name;

	cout << &age << endl;

	cout << *pAge << endl;

	cout << *Myname << endl;

	cout << pAge;     // print the adress of the variable age;
}