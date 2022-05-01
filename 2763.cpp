#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int ouro, prata, bronze, nao_ganhou_medalha; // to cansando de usar abc e xyz :(

    cin >> ouro;
    cin.ignore();
    cin >> prata;
    cin.ignore();
    cin >> bronze;
    cin.ignore();
    cin >> nao_ganhou_medalha;


    // zeros a esquerda
    cout << setw(3) << setfill('0') << ouro << endl; 
    cout << setw(3) << setfill('0') << prata << endl; 
    cout << setw(3) << setfill('0') << bronze << endl; 
    cout << setw(2) << setfill('0') << nao_ganhou_medalha << endl;

    return 0;
}