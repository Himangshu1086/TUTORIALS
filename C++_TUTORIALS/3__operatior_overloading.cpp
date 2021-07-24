#include<bits/stdc++.h>
using namespace std;



//  *****just like header file******

class Sally {

public:
	int num;
	Sally();
	Sally(int);



	Sally operator+(Sally);
};


// ****just like the cpp file of the header *****

Sally::Sally() {

}

Sally::Sally(int a) {
	num = a;
}

Sally Sally::operator+(Sally aso) {
	Sally brandnew;
	brandnew.num = num + aso.num;
	return brandnew;
}


int main() {


	Sally a(34);
	Sally b(35);
	Sally c;
	c = a + b;
	cout << c.num << endl;

}