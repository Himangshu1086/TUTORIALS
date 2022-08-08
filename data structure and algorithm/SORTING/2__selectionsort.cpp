/*

approach : 
- find the min element in each window (eg : in arr[0....4] , arr[1...4] etc.) and swap with the i -1 position.

 eg: 4,6,3,2,1,5  
 ===>  consider arr[0...5]
 ele = 4 
 min = 1 
 swap(ele , min );

 1 6 3 2 4 5

*/



#include<bits/stdc++.h>
using namespace std;


void selectionSort(vector<int>& arr)
{
    int n =arr.size();
    
    for(int i=0;i<n;i++)
    {
        int mini = INT_MAX;
        int temp = 0;
       for(int j=i;j<n;j++)
       {
            if(arr[j]<=mini)
            {
                mini = arr[j];
                temp = j;
            }

       }
       swap(arr[temp] , arr[i]);
    }
}


int main()
{
    vector<int>arr = {4,6,3,2,1,5};
    selectionSort(arr);
    for(auto i : arr )
        cout << i << " ";
    return 0;
}

// 1 6 3 2 4 5 
// 1 2 3 6 4 5
