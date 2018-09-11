#include <iostream>
using namespace std;

int main() {
    int i, j=2;
    double d, f=3.4;
    string str="hello, you have entered: ";
    cout << "enter an integer: ";
    cin >> i;
    cout << "enter another float: ";
    cin >> d;
    cout << str << i << ", " << d;
    cout << "\nInternal numbers are: "
         << j << ", " << f;
    
    
}