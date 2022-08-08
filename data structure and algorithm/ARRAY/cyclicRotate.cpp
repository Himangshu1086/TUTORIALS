#include <bits/stdc++.h>
using namespace std;


// program to cyclically rotate an array by one

/*
    EXAMPLE :
    Input:  arr[] = {1, 2, 3, 4, 5}
    Output: arr[] = {5, 1, 2, 3, 4}
*/



void rotate(int arr[] , int n)
{   
    int temp;
    temp = arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        arr[n-i-1] = arr[n-i-2]; 
    }
    arr[0]= temp;

    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
}

int main()
{   
    int  arr[] ={1,2,3,4,5};
    rotate(arr , 5);
}