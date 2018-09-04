#include <iostream>
using namespace std;

int main() {
    const int i=123; // i = i+1; // i++;
    short s=123456789012;
    long l=123456789012;;;;;;
    cout << "int i is " << i << ", size is " << sizeof(i) << endl
         << "short s is " << s << ", size is " << sizeof(s)  << endl
         << "long l is " << l << ", size is " << sizeof(l)  ;
    
}