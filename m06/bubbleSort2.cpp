#include <iostream>
using namespace std;

void swap(int &a, int &b) {int temp = a; a = b; b = temp;}

int main() {
    const int Size = 10;
    int arr[] = {1,4,7,2,5,8,3,6,9,0};
    
    for( auto x:arr ) cout << x << " ";
    cout << endl << endl;
    
    // bubble sort (to order from right to left)
    // diagnal in-order from upper-right to lower-left
    for(int i=Size-1; 0<i; i--) {
        for(int j=Size-i; 0<j; j--) {
            if(arr[j-1] > arr[j]) {
                swap(arr[j-1], arr[j]);
            }
        }
        for(auto x:arr) cout << x << " "; 
        cout << endl;
    }
}