#include <iostream>
using namespace std;

int main() {
    int sum=0, small=100, input;
    
    for(int i=0; i<5; i++) {
        cin >> input; // you need to check the range
        if(input < small) small = input;
        sum += input;
    }
    
    cout << " small: " << small
         << " input: " << input
         << " sum: " << sum;
}
