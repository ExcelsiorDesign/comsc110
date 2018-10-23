// This program uses the getline function to read a line of
// data from the file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
   string input;		// To hold file input
   fstream nameFile;	// File stream object

   // Open the file in input mode.
   nameFile.open("murphy.txt", ios::in);
   
   // If the file was successfully opened, continue.
   if (nameFile) {
       getline(nameFile, input);
       
       // Loop until the file read operation failed
       while (nameFile) {
          cout << input << endl; // Display the last item read.
          getline(nameFile, input); // Read the next item.
       }
       nameFile.close(); // Close the file.
   }
   else {
      cout << "ERROR: Cannot open file.\n";
   }
   return 0;
}