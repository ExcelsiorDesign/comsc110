#include <iostream>
#include <cstdlib>  // srand, rand 
#include <ctime>    // time 
using namespace std;

int main() {
    // random number generator
    int t = time(0); 
    srand ( t ); // seed variable to generator
    // srand ( 0 ); // seed constant
    
    
    // .....
    int lotto;
    for(int i=0; i<10; i++) {
        lotto = (rand() % 2) +1;
        cout << lotto; 
    }
    // int i=3, j=5, k;
    // cout << "outout of 3/5 is " << i/float(j); //float(i)/j;
    // cout << "\noutput is "<< i/5.0;
    // k = j % i;
    // cout << "\noutput of 5 % 3 is " << k;
    
    getline
    
}