#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    cout << "\nEnter a text string: ";
    
    string str2;
    getline(cin, str2);
    cout << str2 << endl;
    
    string str="hello, you have entered: ";
    
    int i, j=2;
    double d, f=3.4567;
    
    
    cout << "enter an integer: ";
    cin >> i;
    cout << "enter another float: ";
    cin >> d;
    cout << str << i << ", " << d;
    cout << "\nInternal numbers are: " // wiki Escape_sequences_in_C
         << j << ", " << f << ", "
         << fixed << setprecision(2) << f ;

    cout << "\nAlternative form: " 
         << j << ", " << f << ", "
         << setw(20) << right 
         << fixed << setprecision(2) << f  << ", something";

    
    
}