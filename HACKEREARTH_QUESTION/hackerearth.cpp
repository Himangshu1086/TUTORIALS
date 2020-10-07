#include <iostream>
 
using namespace std;
 
 
 
int main() 
{
 
   int t,n,k;
 
    cin >> t;
 
    while(t--){
 
        cin >> n >> k;
        int ar[n];
       /* for(int i =0;i<n;i++)
        {
            cin >> ar[i];
        }
        */
        int temp =10000000;
        for(int i =0;i<n;i++)
        {
            cin >> ar[i];
            if (temp>=ar[i])
                temp = ar[i];
        }
        int diff = k-temp;
        if(diff < 0)
            cout << 0<< endl;
        else
            cout << diff << endl;
 
        }
 
    }
 