// This program uses the bubble sort algorithm to sort an 
// array in ascending order. 
#include <iostream> 
using namespace std; 
// Function prototypes 
void sortArray(int [], int); 
void showArray(const int [], int); 

int main() 
{ 
    // Array of unsorted values 
    int values[10] = {1,4,7,2,5,8,3,6,9,0};
    // Display the values. 
    cout << "The unsorted values are: \n"; 
    showArray(values, 10); 
    sortArray(values, 10); 
    cout << "The sorted values are:\n"; 
    showArray(values, 10); 
    return 0; 
} 

void sortArray(int array[], int size)  { 
    bool swap; 
    int temp; 
    do  { 
        swap = false;
        for(int count=0; count < (size-1); count++) { 
            if (array[count] > array[count + 1]) { 
                temp = array[count]; 
                array[count] = array[count + 1]; 
                array[count + 1] = temp; 
                swap = true; 
            } 
        } 
        showArray( array, size);
    } while (swap); 
} 

void showArray(const int array[], int size) { 
    for (int count = 0; count < size; count++) 
        cout << array[count] << " "; 
    cout << endl; 
} 