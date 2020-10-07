#include<bits/stdc++.h>
using namespace std;
#define MAX  10 

int arr[MAX];


class Stack{
    
public:
    int top;
Stack(){ top= -1; }  //constructor

bool push(int element);  // add element to the stack

int pop();      // remove element from the stack

int peek();     // display the top element

bool isEmpty();  // return true or false 

};

bool Stack :: push(int element){

    if(top >= (MAX-1))
    {
        cout << "Stack over flow" << endl;
        return false;
    }
    else 
    {
        arr[++top]=element;
        cout << "push "<< element << endl;
        return true;
    }
    
}

int Stack :: pop()
{

    if(top < 0 )
    {
        cout << "Stack under flow " << endl;
    }
    else {
        int x = arr[top];   // or arr[top--]
        top--; 
        cout << x << " is removed" << endl;
        return x;
        
    }
}


int Stack::peek()
{   
    if(top < 0 )
    {
        cout << "Stack under flow " << endl;
    }
    else {
    cout << arr[top] << " is the top element " << endl;
    return arr[top];
    }
}

bool Stack::isEmpty(){

    if(top < 0)
        {cout << "Stack is empty  " << endl;
        return true;}
    else{
        cout << "Stack is not empty " << endl;
        return false;

    }
}



int main(){

Stack s;

s.push(5);
s.push(10);
s.push(5);
s.push(10);
s.push(5);
s.push(10);
s.push(5);
s.push(10);
s.isEmpty();
//s.pop();
s.pop();
s.peek();
for(int i =0; i<=s.top;i++)
    cout<< arr[i]<< " " ;
}