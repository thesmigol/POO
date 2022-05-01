#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
        int LINHA;
        char OPERACAO;
        double M[12][12];
        double soma = 0.0;
cout << fixed << setprecision(1);
cin >> LINHA >> OPERACAO;    
        for(int i = 0; i <= 11; i++){
        for(int o = 0; o <= 11; o++){
cin >> M[i][o];
        if(i == LINHA){
soma += M[i][o];
                }
        }
}
        if(OPERACAO == 'S')
cout << soma << endl;
        if(OPERACAO == 'M')
cout << soma/12.0 << endl;
return 0;
}
