

// https://codeforces.com/problemset/problem/492/B



#include<bits/stdc++.h>
using namespace std;


void himangshu()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 



void solve(){

int n , l ;
cin >> n >> l;
vector<int>arr;
int k ;
for(int i=0;i<n;i++)
{
    cin >> k; 
    arr.push_back(k); 
}
sort(arr.begin() , arr.end());
int ans = 2*max(arr[0]  ,  l -arr[n-1]);

for(int i=1;i<arr.size();i++)
{
    ans = max(ans, (arr[i]-arr[i-1]));
}

 printf("%.10f\n",ans/2.);

}


int main(){
    // himangshu();
    solve();
}