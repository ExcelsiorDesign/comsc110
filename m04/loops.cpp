#include <iostream>
using namespace std;

int main() {
    int i;
    for ( i=1; i<=10; i++) // 1<=i && i<=10
        cout << i*2 << " ";
    cout << endl;
    i=1;
    // while( i<1 || 10<i )
    while( 1<=i && i<=10 ) {
        cout << i*2 << " ";
        i++;
    }
    
    // complete the do while loop below 

}