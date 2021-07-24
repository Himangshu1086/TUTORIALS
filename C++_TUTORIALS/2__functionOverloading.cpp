#include<bits/stdc++.h>
using namespace std;

/*
	function overloading in c++ is  the idea that
	in c++ you can built more than one function
	with the same name.
*/

void printNumber(int x) {
	cout << "I am printing an integer " << x << endl;
}
void printNumber(float x) {
	cout << "now i am printing a float number " << x << endl;
}

int main()
{
	int a = 54;
	float b = 32.87456;

	printNumber(a);
	printNumber(b);
	return 0;
}