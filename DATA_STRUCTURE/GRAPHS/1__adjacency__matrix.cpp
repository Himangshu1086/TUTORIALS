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

	// create a adjustancy matrix
	int adj[n + 1][n + 1];

	// matrix is always of n*n size and in undirected graph adj matrix is always symmetric

	memset(adj, 0, sizeof(adj));


	for (int i = 0; i < m; i++)
	{
		int u , v ;
		cin >> u >> v;    // Graph vertex is representated as V(u,v) which means there is a edge between u and v.
		adj[u][v] = 1;
		adj[v][u] = 1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << adj[i][j] << " ";
		}
		cout << endl;
	}

}