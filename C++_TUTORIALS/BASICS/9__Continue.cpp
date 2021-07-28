
// The C++ continue statement is used to continue loop.
//It continues the current flow of the program and skips the remaining 
//code at specified condition. In case of inner loop, it continues only inner loop.

#include <iostream>  
using namespace std;  
int main()  
{  
     for(int i=1;i<=10;i++){      
            if(i==5){      
                continue;      
            }      
            cout<<i<<"\n";      
        }        
}  

// For the above code it skips the the i = 5 and just continues the loop