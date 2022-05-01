#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
    int N, SAQUES, BLOQUEIOS, ATAQUE;
    int SAQUEI, BLOQUEEI, ATAQUEI;
    double PORCENTAGEM_s = 0.00, PORCENTAGEM_b = 0.00, PORCENTAGEM_a = 0.00;
    double SACAGEM = 0.00, BLOQUEACAO = 0.00, ATACANTE = 0.00;
    double SAKADAS, BLOQUEIO_EMOCIONAL, ATACADO;
    char Jogador[256];
cin >> N;
    for(int i=1; i<=N; i++){
cin >> Jogador; // pra que?
cin >> SAQUES >> BLOQUEIOS >> ATAQUE;
cin >> SAQUEI >> BLOQUEEI >> ATAQUEI;
PORCENTAGEM_s += SAQUES; PORCENTAGEM_b += BLOQUEIOS; PORCENTAGEM_a += ATAQUE;
SACAGEM += SAQUEI; BLOQUEACAO += BLOQUEEI; ATACANTE += ATAQUEI;
    }
SAKADAS = (SACAGEM/PORCENTAGEM_s)*100;
BLOQUEIO_EMOCIONAL = (BLOQUEACAO/PORCENTAGEM_b)*100;
ATACADO = (ATACANTE/PORCENTAGEM_a)*100;
cout << fixed << setprecision(2);
cout << "Pontos de Saque: " << SAKADAS << " %."<< endl << "Pontos de Bloqueio: " << BLOQUEIO_EMOCIONAL << " %."<< endl << "Pontos de Ataque: " << ATACADO << " %."<< endl;
return 0;
}
