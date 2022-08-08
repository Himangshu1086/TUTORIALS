








#include<bits/stdc++.h>
using namespace std;


class StankFist {

public:
	StankFist() {
		stankvariable = 0;
	}
private:
	int stankvariable;

	// DECLARATION OF FRIEND

	friend void StankFriend(StankFist &sfo);
};



void StankFriend(StankFist &sfo)
{
	sfo.stankvariable = 99;
	cout << sfo.stankvariable << endl;
}


int main(int argc, char const *argv[])
{
	StankFist bob;
	StankFriend(bob);
	return 0;
}