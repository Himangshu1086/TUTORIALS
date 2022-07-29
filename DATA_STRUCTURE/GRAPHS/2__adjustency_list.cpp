#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
#endif

	//unndirected graph
	int n, m;
	cin >> n >> m;

	// n -> number of edges
	// m -> number of edges connection

	// create a adjustancy list

	vector<int> adj[n + 1];


	for (int i = 0; i < m; i++)
	{
		int u , v ;
		cin >> u >> v;    // Graph vertex is representated as V(u,v) which means there is a edge between u and v.
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1; i < n; i++)
	{
		cout << i << " -> ";
		for (auto j : adj[i])
		{
			cout << j << " ";
		}
		cout << endl;
	}

}