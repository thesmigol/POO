#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(3);
    double a, pi;
    pi = (4.0/3);
    cin >> a;
    a = a * a * a; 
    cout << "VOLUME = " << pi * (3.14159) * a << endl;
    return 0;
}