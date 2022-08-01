/*
    without declaration in the class friend function cannot be made.It is declare in the class and define outside the class with scope operator.

*/



#include<bits/stdc++.h>
using namespace std;




class Complex{

    private:
        int a,b;
    public :
    void setData(int x , int y )
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << " " <<b <<endl;
    }

    // FRIEND FUNCTION CONCEPT 

//  void fun(); // ---> this is member function
    friend void fun(Complex c); // ----> this is a friend function 
};

// void Complex:: fun() =====> this is not done in friend function ... fun is not a member function


void fun(Complex c)
{
 //   cout << a+b << endl;  //  ======>  this is wrong ... a and b cannot be directly access because a & b kiske hai eh pata nhi chalega c1 ke hai c2 ke hai...

    cout << c.a + c.b <<endl;


}




int main()
{
    Complex c1;
    //    c1.fun();   ====> this is wrong ... friend function dont need any type
}