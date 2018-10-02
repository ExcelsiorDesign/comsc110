#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    if(0) cout << "0 is true\n";
    else cout << "0 is false\n";
    
    if(~NULL) cout << "~NULL is true\n";
    else cout << "~NULL is false\n";
    
    
    int donuts = 10;
    
    if (donuts = 4)
        donuts = 0;
    else
        donuts += 2;
    
    cout << donuts;
}