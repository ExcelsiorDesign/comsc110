// Assignment 5 part-A: as5a_area_starter.cpp 
// To extract the Code blocks embedded in the main body 
#include <iostream>
using namespace std;

// implementation example:
double getLength() {
    double length;
	cout << "Enter the length: ";
	cin >> length;
	return length;
}

// implement these functions declaration and use them in the main program.
// getWidth(), getArea(), displayData()

int main()
{
	double length;  // To hold the rectangle's length
	double width;	// To hold the rectangle's width
	double area;	// To hold the rectangle's area

	// Get the rectangle's length 
    length = getLength();

	// Get the rectangle's width
	// Define/refer an external function as getWidth 
	cout << "Enter the width: ";
	cin >> width;

	// Get the rectangle's area
	// Define/refer an external function as getArea 
	area = length * width;

	// Display the rectangle's data
	// Define/refer an external function as displayData
	cout << "\nRectangle Data"
		 << "\n--------------"
	     << "\nLength: " << length
	     << "\nWidth:  " << width
	     << "\nArea:   " << area;

	return 0;
}