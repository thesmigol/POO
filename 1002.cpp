#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>

using namespace std;
using std::setprecision;

 
int main() {
    double ENTRADA,AREA;
    cin >> ENTRADA;
    AREA=(3.14159)*(ENTRADA*ENTRADA);
    cout << "A=" << fixed << setprecision(4) << AREA << endl;
    return 0;
}