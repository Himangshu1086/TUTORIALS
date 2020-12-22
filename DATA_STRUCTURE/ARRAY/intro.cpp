
#include<bits/stdc++.h>
using namespace std;


//REVERSE OF A ARRAY : 

void reverseArray(int arr[] ,int n , int d )
{
    int temp[n];
    for(int i=0 ;i<n/2;i++)
    {   
        temp[i]=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp[i];
    }

}
void printOutput(int arr[] , int n , int d)
{
    for(int i = 0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
}


//  ROTATION OF AN ARRAY UPTO A Dth ELEMENT:
 
 void rotateArray(int ar[] , int n , int d)
 {
     int temp[d];
     for(int i=0;i<d;i++)
     {
         temp[i] = ar[i];
     }

     for(int i =0;i<n-d;i++){
         ar[i]=ar[d+i];
     }


     for(int i=0;i<d;i++)
     {
         ar[n-i-1] = temp[d-i-1];
     }
 }





int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    reverseArray(arr , 7,7); 
    printOutput(arr , 7,7 );
    cout << endl;
    rotateArray(arr , 7 , 4);
    printOutput(arr , 7,7 );
     

}





