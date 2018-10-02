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
    printEven(100);
}