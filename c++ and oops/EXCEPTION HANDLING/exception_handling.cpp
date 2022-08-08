/*

Exception Handling in C++ is a process to handle runtime errors. 
We perform exception handling so the normal flow of the application can be 
maintained even after runtime errors.

In C++, we use 3 keywords to perform exception handling:

try
catch, and
throw


*/

//C++ try/catch example
#include <iostream>  
using namespace std;  
float division(int x, int y) {  
   if( y == 0 ) {  
      throw "Attempted to divide by zero!";  
   }  
   return (x/y);  
}  
int main () {  
   int i = 25;  
   int j = 0;  
   float k = 0;  
   try {  
      k = division(i, j);  
      cout << k << endl;  
   }catch (const char* e) {  
      cerr << e << endl;  
   }  
   return 0;  
}  