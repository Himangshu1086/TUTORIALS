/*

The basic idea is to make the left array smaller than the pivot and right array greater than the pivot. 
Take the first element as the pivot 
loop from left-> right and find a element which is larger than the pivot (i)
similar loop rom right->left and find a element which is smaller than the pivot.(j)
than swap (i ,j )
Repeat this till l<r
After that swap(pivot , arr[j])

i			  j
4 6 2 5 7 9 1 3
p

  i			  j
4 6 2 5 7 9 1 3

  i			  j
4 1 2 5 7 9 1 6   ===> swap(arr[i] , arr[j])

  	  i		j
4 3 2 5 7 9 1 6

  	  i		j
4 3 2 1 7 9 5 6   ===> swap(arr[i] , arr[j])

  	  j	i	
4 3 2 1 7 9 5 6

j        
1 3 2 4 7 9 5 6   =====> swap(arr[j] , pivot)
	  p



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