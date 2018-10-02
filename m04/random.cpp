#include <cstdlib> // rand, srand ..
#include <ctime> // time
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    srand(time(0)); // seed the rand distribution with 0
    // counting loop, while is an event (sentinel) loop 
    // the following convention for count is human based
    for(int count=1; count<=15; count++) {
        cout << setw(2) << count << "  " 
             << setw(16) << rand() << endl;
    }
}