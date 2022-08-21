
//We are given one array and need to find how many perfect square are there in the array in O(n). 

#include<iostream>
#include <math.h>
using namespace std;

void solve(int arr[5])
{
    int count=0;
    for(int i=0;i<4;i++)
        if(arr[i]/sqrt(arr[i]*1.0)==sqrt(arr[i]))
            count++;
    cout << count<<endl;
}


int main()
{
    int arr[5] ={1,9,3,36,25};
   solve(arr);
}