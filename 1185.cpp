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
cin >> OPERACAO;    
        for(int i = 0; i < 12; i++){
        for(int o = 0; o < 12; o++){
cin >> M[i][o];
        if(o < 11 - i){
soma += M[i][o];
                }
        }
}
        if(OPERACAO == 'S')
cout << soma << endl;
        if(OPERACAO == 'M')
cout << soma/66.0 << endl;
return 0;
}
