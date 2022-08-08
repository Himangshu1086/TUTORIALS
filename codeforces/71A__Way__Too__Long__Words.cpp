#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n ;
	while (n--)
	{
		string line  ;
		cin >> line ;
		int size = line.length();
		if (size >= 10 )
		{
			string temp = line[0] + to_string(size - 2) + line[size - 1];
			cout << temp << endl;
		}
		else
			cout << line << endl;
	}
}