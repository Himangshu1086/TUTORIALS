#include<iostream>
#include <functional>
using namespace std;

int solve(int n , int k)
{
    if(n==1) return 0;

    return (solve(n-1,k)+k)%n;
}


int main()
{
   cout << solve(5,2)+1; 
}