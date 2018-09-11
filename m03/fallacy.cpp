#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter grade: ";
    cin >> mark;
    // if (mark >= 80)  cout << "A" << endl;
    // else if (mark >= 70) cout << "B" << endl;
    // else if (mark >= 60) cout << "C" << endl;
    // else if (mark >= 50) cout << "D" << endl;
    // else cout << "F" << endl;
    int ship = 0;
    if (mark >= 80) ship=ship+200;
    if (mark >= 70) ship+=100;
    if (mark >= 60) ship+=50;

    cout << mark << " award is " << ship << endl;
}