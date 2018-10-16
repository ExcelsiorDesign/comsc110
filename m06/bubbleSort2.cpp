#include <iostream>
using namespace std;

void swap(int &a, int &b) {int temp = a; a = b; b = temp;}

int main() {
    const int Size = 10;
    int arr[] = {1,4,7,2,5,8,3,6,9,0};
    
    for( auto x:arr ) cout << x << " ";
    cout << endl << endl;
    
    // bubble sort
    for(int i=0; i<Size-1; i++ ) {
        for(int j=Size-i-1; 0<=j; j--) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
                
    for( auto x:arr ) cout << x << " ";
}