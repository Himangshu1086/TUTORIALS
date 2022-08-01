/*
 The basic idea is to place the element in its correct place by swaping.

 eg: 4,6,3,2,1,5  
 ===>  consider cur = 1
 4 6 3 2 1
 4 6 3 1 2
 4 6 1 3 2
 4 1 6 3 2
 1 4 6 3 2 
*/



#include<bits/stdc++.h>
using namespace std;


void insertionSort(vector<int>& arr)
{
    int n =arr.size();
    int cur ;
    int j=0;
    for(int i=1;i<n;i++)
    {
        cur = arr[i]; 
        j = i-1;
        while(j>=0 and arr[j] > cur)
        {
            swap(arr[j+1] , arr[j]);j-=1;
        }
    }
}


int main()
{
    vector<int>arr = {4,6,3,2,1,5};
    insertionSort(arr);
    for(auto i : arr )
        cout << i << " ";
    return 0;
}