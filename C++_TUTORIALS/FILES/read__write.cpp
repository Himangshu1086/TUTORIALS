/*

fstream	    It is used to create files, write information to files, and read information from files.
ifstream	It is used to read information from files.
ofstream	It is used to create files and write information to the files.

*/


/*
C++ FileStream example: writing to a file

Let's see the simple example of writing to a text file testout.txt using C++ FileStream programming.

#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream("testout.txt");  
  if (filestream.is_open())  
  {  
    filestream << "Welcome to javaTpoint.\n";  
    filestream << "C++ Tutorial.\n";  
    filestream.close();  
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}  
Output:

The content of a text file testout.txt is set with the data:
Welcome to javaTpoint.
C++ Tutorial.

*/


/*

C++ FileStream example: reading from a file
Let's see the simple example of reading from a text file testout.txt using C++ FileStream programming.

#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  string srg;  
  ifstream filestream("testout.txt");  
  if (filestream.is_open())  
  {  
    while ( getline (filestream,srg) )  
    {  
      cout << srg <<endl;  
    }  
    filestream.close();  
  }  
  else {  
      cout << "File opening is fail."<<endl;   
    }  
  return 0;  
}  

*/


/*

C++ Read and Write Example
Let's see the simple example of writing the data to a text file testout.txt and then reading the data from the file using C++ FileStream programming.

#include <fstream>  
#include <iostream>  
using namespace std;  
int main () {  
   char input[75];  
   ofstream os;  
   os.open("testout.txt");  
   cout <<"Writing to a text file:" << endl;  
   cout << "Please Enter your name: ";   
   cin.getline(input, 100);  
   os << input << endl;  
   cout << "Please Enter your age: ";   
   cin >> input;  
   cin.ignore();  
   os << input << endl;  
   os.close();  
   ifstream is;   
   string line;  
   is.open("testout.txt");   
   cout << "Reading from a text file:" << endl;   
   while (getline (is,line))  
   {  
   cout << line << endl;  
   }      
   is.close();  
   return 0;  
}  
Output:

Writing to a text file:  
 Please Enter your name: Nakul Jain    
Please Enter your age: 22  
 Reading from a text file:   Nakul Jain  
 22

*/




#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    ifstream image("a.jpg");
}