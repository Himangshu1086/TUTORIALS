/*



*/




#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int l , int r)
{
	int pivot = arr[l];
	int i = l;
	int j = r;
	while (i < j)
	{
		while (arr[i] <= pivot)i++;
		while (arr[j] > pivot)j--;
		if (i < j)
			swap(arr[i] , arr[j]);
	}
	swap(arr[j] , arr[l]);
	return j;
}

void QuickSort(int arr[] , int l , int r)
{
	if (l < r)
	{
		int p = partition(arr , l , r);
		QuickSort(arr , l , p - 1);
		QuickSort(arr , p + 1 , r);
	}

}


int main()
{
	int arr[] = {3, 4, 5, 2, 1};
	QuickSort(arr, 0 , 4);
	for (auto i : arr)
		cout << i <<  " ";
}