#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int A,B;
float C,X;
    cin >> A;
    cin >> B;
    cin >> C;
    X = (B*C);
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << A << endl;
    cout << "SALARY = U$ " << X << endl;
    return 0;
}