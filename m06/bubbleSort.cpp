#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a; a = b; b = temp;
}

int main() {
    const int Size = 10;
    int arr[] = {1,4,7,2,5,8,3,6,9,0};
    for(auto x:arr) cout << x << " ";
    
    // // Try the following instead
    
    // bool first=true;
    // for(auto x:arr) {
    //     if(!first) cout << ", ";
    //     else first=false; 
    //     cout << x; 
    // }
    
    cout << endl << endl;
    
    for(int i=0; i<Size-1; i++ ) {
        // for(int j=0; j<Size-i-1; j++) {
        for(int j=i; j<Size-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                // int large = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = large;
            }
            // for(auto x:arr) cout << x << " "; 
            // cout << endl;
        }
        for(auto x:arr) cout << x << " "; 
        cout << endl;
    }
}
