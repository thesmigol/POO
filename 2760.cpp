#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;
    cout << setw(10) << a << setw(10) << b << setw(10) << c <<  endl;

    return 0;
}