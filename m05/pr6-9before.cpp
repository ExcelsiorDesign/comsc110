#include <iostream>
using namespace std;

int number =20;

int main()
{
   // int number = 12;
   cout << "number is " << number << endl;
   {
       int number = 0;
       cout << "Now the value is " << number << endl;
   }
   // changeMe(number);
   
   // Display the value in number again.  
   cout << "Now back in main again, the value of ";
   cout << "number is " << number << endl;
   return 0;
}