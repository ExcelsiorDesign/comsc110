// This program uses overloaded functions.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
int square(int);
double square(double);
string square(string);

int main()
{
   int userInt;
   double userFloat;

   // Get an int and a double.
   cout << fixed << showpoint << setprecision(2);
   cout << "Enter an integer and a floating-point value: ";
   cin >> userInt >> userFloat;
   
   // Display their squares.
   cout << "Here are their squares: ";
   cout << square(userInt) << " and " << square(userFloat);
   cout << square("abcde");
   return 0;
}

int square(int number) { return number * number;}
double square(double number) { return number * number; }
string square( string s ) {
   string sq;  
   for(int i=0; i<s.size(); i++)
      sq += "\n" + s; 
   return sq;
}