#include<bits/stdc++.h>
using namespace std;


class Node{

    public :
    int data;
    Node* link;

};

int main(){                                  //  node
   /*                
         address  :                                    200                  100             300
                         __A____                   _____________         __________        _________
       linked list :    |__200_|                  |_2____|_100_| ---->  |_4_|_300_| ----> |_6__|___| -----> NULL
                        *POINTER TO head NODE     *data   *link
                        this is node*



*/

 
 Node* A; 
 A = NULL;  //empty list  ---->  A : | NULL |
 
 // dynamic memory allocation :
 Node* temp = new Node;   //----> temp : |   |   |  (let the address of this be 200)

 temp -> data = 2;      // store the value 2 at   temp : | 2 |   |
 temp -> link = NULL;  // store the value 2 at   temp : | 2 | 0 |
 
 A = temp;     // store the address of temp of data type Node i.e  A : | 200 |












}