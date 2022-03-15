#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double x1, x2, y1, y2, kkkk, sei_la, agora_foi;
    cout << fixed << setprecision(4); 
    cin >> x1 >> y1 >> x2 >> y2;
    kkkk = ((x2 - x1) * (x2 - x1));
    sei_la = ((y2 - y1) * (y2 - y1));
    agora_foi = sqrt(kkkk + sei_la);
    cout << agora_foi << endl;

    return 0;
}