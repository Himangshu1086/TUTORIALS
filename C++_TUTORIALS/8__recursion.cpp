#include<bits/stdc++.h>
using namespace std;

/*  WHENEVER  YOU BULIT A TRULY PERFECT  RECURSIVE FUNCTION
	YOU NEED TO HAVE A BASE CASE .

	A BASE CASE IS PRETTY MUCH AN ENDING POINT FOR YOUR FUNCTION.
*/


//factorial of a number.

int Factorial(int x) {

	if (x == 1) {
		return 1;
	}
	else
	{
		return x * Factorial(x - 1);
	}
}

int main() {
	cout << Factorial(5) << endl;
}