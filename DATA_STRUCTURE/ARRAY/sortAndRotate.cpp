

#include <bits/stdc++.h>
using namespace std;

bool searchElement(int arr[] , int n , int k)
{
    for(int i =0;i<n;i++){
        if(arr[i]==k){
            cout<<i<<endl;
            return true;
        }
    }
}


int main() {
	int t;
    cin >> t ;
	while(t>0)
	{
	    int n,k;
	    cin >> n;
	    int arr[n];
	    for(int i =0;i<n;i++){
	        cin >> arr[i];
	    }
	    cin >> k ;
	    if(!searchElement(arr , n , k)){
            cout << -1 << endl;
        }
        t--;
	    
	}
	
	
	return 0;
}

