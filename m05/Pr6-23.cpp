// This program shows that a static local variable is only
// initialized once.
#include <iostream>
using namespace std;

void showStatic(); // Function prototype

int main()
{
   // Call the showStatic function five times.
   for (int count = 0; count < 5; count++)
      showStatic();
   return 0;
}


void showStatic()
{
   static int statNum = 1;

   cout << "statNum is " << statNum << endl;
   statNum++;
} 