#include<bits/stdc++.h>

//standard library
#include<cstdlib>



using namespace std;
int main() {

	cout << rand(); // random number generator

// generate a random number from 1 to 6 only :

	for (int i = 1; i < 25; i++) {
		cout << 1 + (rand() % 6) << endl;
	}


// srand(); is also used to change the algorithm of the
	// computer to generate random numnbers while giving
	// any parameter
	//eg : srand(43);
	//eg : srand(640);


}