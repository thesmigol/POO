#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
using namespace std;

int main() {

    int G, P, H; 
    cin >> G;
    cin >> P;
    cin >> H;

    cout << "A = " << G << ", B = " << P << ", C = " << H << endl; 
    cout << "A = " << setw(10) << setfill(' ') << G << ", B = " << setw(10) << setfill(' ') << P << ", C = " << setw(10) << setfill(' ') << H << endl;
    cout << "A = " << internal << setw(10) << setfill('0') << G << ", B = " << setw(10) << setfill('0') << P << ", C = " << setw(10) << setfill('0') << H << endl;
    cout << left << "A = " << setw(10) << setfill(' ') << G << ", B = " << setw(10) << setfill(' ') << P << ", C = " << setw(10) << setfill(' ') << H << endl;

    return 0;
}