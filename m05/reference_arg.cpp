#include <iostream>
using namespace std;

void f(int &a, int &b) {
    b = 2*a +1;
    cout << "internal: " << a << ", " << b << endl;
}

int main() {
    int x = 1, y=2;
    
    f(x, y);
    cout << x << " " << y << endl;
    f(x, y);
    cout << x << " " << y << endl;
}