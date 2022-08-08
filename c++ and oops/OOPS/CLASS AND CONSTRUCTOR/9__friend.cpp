#include<bits/stdc++.h>
using namespace std;

class Complex{

private:
    int a ;
    int b;
public :
    void setData(int a, int b)
    {
        this->a=a;  // see the output without this operator 
        this->b=b;
    }
    void print( int a , int b)
    {
        cout << a << " "<< b <<endl;
    }
    friend void fun(Complex);  // this fun method can access the data member of the class
};

void fun(Complex c) // defined outside the class only without any Membership label ( Complex ::)
{
    cout << "This is a Friend function : Sum of the class data member : "<< c.a+c.b << endl;
}

int main()
{
    Complex c ;
    c.setData(2,4);
    
    fun(c);
    return 0;
}