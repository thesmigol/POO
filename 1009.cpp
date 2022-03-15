#include <stdio.h>
#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
#include<string>
using namespace std;

int main() {
string nome;
double A,B,X;
    cin >> nome;
    cin >> A;
    cin >> B;
    X = (B * 0.15) + A;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << X << endl;
    return 0;
}