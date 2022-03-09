#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {

    double nao_contem_glutem, diet;
    nao_contem_glutem = 234.345;
    diet = 45.698;


    cout << fixed << setprecision(6) << nao_contem_glutem << " - " << diet << endl;
    cout << fixed << setprecision(0) << nao_contem_glutem << " - " << diet << endl;
    cout << fixed << setprecision(1) << nao_contem_glutem << " - " << diet << endl;
    cout << fixed << setprecision(2) << nao_contem_glutem << " - " << diet << endl;
    cout << fixed << setprecision(3) << nao_contem_glutem << " - " << diet << endl;
    cout << fixed << setprecision(6) << scientific << nao_contem_glutem << " - " << diet << endl;
    cout << fixed << setprecision(6) << scientific << uppercase << nao_contem_glutem << " - " << diet << endl; // desculpa professor nao achei como usar o scientific com E :((
    cout << fixed << setprecision(3) << nao_contem_glutem << " - " << diet << endl;
    cout << fixed << setprecision(3) << nao_contem_glutem << " - " << diet << endl;
    

    return 0;
}