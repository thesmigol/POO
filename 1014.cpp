#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double a, b, c, d, x, y, resultado;
    
    cout << fixed << setprecision(4); 
    
    cin >> a >> b;
    cin >> c >> d;
    
    x = ((c - a) * (c - a));
    y = ((d - b) * (d - b));
    
    resultado = sqrt(x + y);
    
    cout << resultado << endl;

    return 0;
}