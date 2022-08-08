#include<bits/stdc++.h>
#include<iostream>
#define in long long
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    k= 240 &mdash; k;
    k = k/5;
    in c;
    c = n;
    if(c*(c+1)/2 <=k)//&& (c+2)(c+1))
    {
        c = n;
        printf("%lld",c);
        c=-1;
    }
    int l=0,r=n;//This is Lower and Upper Bound
    while( c>=0 )
    {
    c = (l+r)/2; // It is in the middle of upper and lower Bound
    if ((c+2)*(c+1)/2 > k && c*(c+1)/2 <=k)
    {
        //c = c -1;
        printf("%lld",c);
        c=-2;
    }
    else if ( c*(c+1)/2 < k)
    {
         l=c+1;
    }
    else if ( c*(c+1)/2 > k )
    {
         r=c-1;
    }

    }
}