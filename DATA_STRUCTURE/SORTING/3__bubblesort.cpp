/*

Bubble sort is the simple algorithm thats works by repeating swapping of adjacent elements 
if they are in wrong place.

eg : 5 1 4 2 8 

1 5 4 2 8
1 4 5 2 8
1 4 2 5 8 === here 5 is place in its correct place

*/


#include<bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int>& arr)
{
    int n = arr.size();

    for(int i=0;i<n;i++)
    {
        bool swaped = false;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]> arr[j+1])
                swap(arr[j],arr[j+1]),swaped=true;
        }

        // If no two element were swapped by inner loop , then break
        if(swaped==false) break;
    }
}

int main()
{
     vector<int>arr = {4,6,3,2,1,5};
    bubbleSort(arr);
    for(auto i : arr )
        cout << i << " ";
    return 0;
    
}