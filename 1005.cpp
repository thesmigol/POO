#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>

using namespace std;
 
int main() {
     float NOTA1,NOTA2;
    cin >> NOTA1;
    cin >> NOTA2;
    
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << (NOTA1*3.5+NOTA2*7.5)/(3.5+7.5) << endl;

    return 0;
}