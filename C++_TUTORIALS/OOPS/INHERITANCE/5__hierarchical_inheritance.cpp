

//Hierarchical inheritance is defined as the process of deriving more than one class from a base class.

/*
                        ________
                        |___A__|
                            |
                 |----------|-------------|
                 |          |             |
                _|___      _|___        __|__
               |__B__|    |__C__|      |__D__|                          



*/


#include<bits/stdc++.h>
using namespace std;

//base class
class Shape{

    public:
    int a;
    int b;
    void get_data(int n , int m)
    {
        a = n ;
        b = m ;
    }
};


// inheriting shape class
class Rectangle : public Shape{

    public :
     int rec_area ()
     {
         int area = a*b;
         return area;
     }
};


// inheriting shape class
class Triangle : public Shape {

    public :
     float triangle_area()
     {
         float area = 0.5*a*b;
         return area;
     }
};




int main()
{
    Rectangle r1 ;
    Triangle t1;
    r1.get_data( 4, 5);
    cout << "Rectangle area : " << r1.rec_area() << endl;
    t1.get_data( 10, 34);
    cout <<" Triangle area : " <<  t1.triangle_area() <<endl;
}