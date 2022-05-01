#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
 int TAMANHO, LINHA, POSICAO, OMENOR;
    cin >> TAMANHO;
    int x[TAMANHO];
    for(LINHA = 0; LINHA < TAMANHO; LINHA++)
          cin >> x[LINHA];
            OMENOR=x[0];
    for(LINHA = 1; LINHA < TAMANHO; LINHA++){
    if(OMENOR > x [LINHA]){
            OMENOR=x[LINHA];
            POSICAO=LINHA;
    }}
    cout << "Menor valor: " << OMENOR << endl;
    cout << "Posicao: " << POSICAO << endl;
return 0;
}
