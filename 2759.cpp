#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
#include <string>
using namespace std;

int main() {

    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
    cout << "A = " << b << ", B = " << c << ", C = " << a << endl;
    cout << "A = " << c << ", B = " << a << ", C = " << b << endl;

    return 0;
}