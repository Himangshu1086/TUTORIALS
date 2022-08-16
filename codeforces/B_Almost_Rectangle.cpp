#include<bits/stdc++.h>
using namespace std;


void solve()
{

    int n ;
    cin >> n;
    char arr[n][n];
    char k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> k;
            arr[i][j]=k;
        }
    }

    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
       {
         for(int j=0;j<n;j++)
            {
                if(arr[i][j]=='*')
                 v.push_back({i,j});
            }
       }    


        if(v[0].second==v[1].second)
        {
           if(v[0].second+1<n)
            {
                arr[v[0].first][v[0].second+1]='*';
                arr[v[1].first][v[1].second+1]='*';
            }    
            else
            {
                arr[v[0].first][v[0].second-1]='*';
                arr[v[1].first][v[1].second-1]='*';
            }
        }
        else if(v[0].first ==v[1].first)
        {
            if(v[0].first+1<n)
            {
                arr[v[0].first+1][v[0].second]='*';
                arr[v[1].first+1][v[1].second]='*';
            }    
            else
            {
                arr[v[0].first-1][v[0].second]='*';
                arr[v[1].first-1][v[1].second]='*';
            }
        }
    else
    {
        arr[v[0].first][v[1].second] = '*';
        arr[v[1].first][v[0].second] = '*';    
    }


    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n;j++)
        {
            cout <<arr[i][j];
        }
        cout<<endl;
    }     
}



int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    
}