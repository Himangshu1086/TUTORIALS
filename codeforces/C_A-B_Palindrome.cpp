#include<bits/stdc++.h>
using namespace std;


void solve()
{

    int a,b ;
    cin >> a>>b ;
    char k;
    string s ="";
    for(int i =0;i<a+b;i++)
        {
            cin >> k;
            s+=k;
        }

    int l=0 , r=a+b-1;
    while(l<=r and (a+b!=0))
    {
        if(s[l]=='?' and s[r]=='?')
            {
                if(a>b)
                    a-=2;
            }
    }



 cout<<s << endl;
}



int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    
}