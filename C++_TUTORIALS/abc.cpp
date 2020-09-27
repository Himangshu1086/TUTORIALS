#include<bits/stdc++.h>
using namespace std;

int main()
{



	deque<int> dq;
	dq.push_back(1); // {1}
	dq.emplace_back(2); // {1, 2}
	dq.push_front(4); // {4, 1, 2}
	dq.emplace_front(3); // {3, 4, 1, 2}

	dq.pop_back(); // {3, 4, 1}
	dq.pop_front(); // {4, 1}

	cout << dq.back() << " ";


	cout <<	dq.front() << " ";


	for (auto i : dq)
	{
		cout << i << " ";
	}

cout<<endl;













}



