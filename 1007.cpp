#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int A,B,C,D,X;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    X=((A*B)-(C*D));
    cout << "DIFERENCA = " << X << endl;
    return 0;
}