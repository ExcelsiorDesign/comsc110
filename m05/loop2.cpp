#include <iostream>
using namespace std;

void printEven(int number) {
    int i=1;
    while( i<=number ) {
        cout << i*2 << " ";
        i++;
    }
}


int main() {
    // int i=1;
    // while( i<=10 ) {
    //     cout << i*2 << " ";
    //     i++;
    // }
    printEven(100);
}