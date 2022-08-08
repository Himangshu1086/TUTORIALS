/*

use the hashing method to store the frequency

*/



#include<bits/stdc++.h>
using namespace std;


vector<int> countSort(vector<int>& arr)
{
    int n = arr.size();
    int maxi = *max_element(begin(arr) , end(arr));
    vector<int> count(maxi+1 , 0);
    vector<int> result(n,0);
    for(int i=0;i<n;i++)
        count[arr[i]]++;
    
    int i =0 , j=0;

    while(i<count.size())
    {
        if(count[i]!=0)
        {
            result[j] = i;
            j++;
            count[i]--;
        }
        else
            i++;
    }
    return result;
}


int main()
{
    vector<int>arr = {4,6,3,2,1,5};
    vector<int>ans = countSort(arr);
    for(auto i : ans )
        cout << i << " ";
    return 0;
}