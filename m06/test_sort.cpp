#include <iostream>
#include "sort.h"

using namespace std;

int main() {
    vector<int> arr = {1,4,7,2,5,8,3,6,9,0};
    for(auto x:arr) cout << x << " ";
    cout << endl << endl;
    sort(arr);
}