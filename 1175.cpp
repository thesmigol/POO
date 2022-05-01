#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

class Vet{
    private:
		int N[20], ENTRADA = 0, SELETOR;
        int i, o;

    public:
        void ler();
        int trocar();
        void mostrar();
};

void Vet::ler(){
    for(int o = 0; o < 20; o++){
    cin >> N[ENTRADA];
    ENTRADA++;
    }
    return;
}

int Vet::trocar(){
    ENTRADA = 0;
    for(int i = 19; i >= 10; i--){
    SELETOR = N[i];
    N[i] = N[ENTRADA];
    N[ENTRADA] = SELETOR;
    ENTRADA++;
    }
}

void Vet::mostrar(){
    for(int o = 0; o < 20; o++){
    cout << "N[" << o << "] = " << N[o] << endl;
    }
}

    


int main() { 
     Vet v;
     v.ler();
     v.trocar();
     v.mostrar();
     return 0;
}