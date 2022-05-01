#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

class TTurma {
	private:
		double x[100];
        double y[100];
        int contador;
        string aluno[100];
	public:
		int ler();
		void listar();
};

int TTurma::ler(){
    cin >> contador;
    for(int i = 0; i < contador; i++){
    cin.ignore();
    getline(cin,aluno[i]);
    cin >> x[i] >> y[i];
     }
};

void TTurma::listar(){
     for(int i = 0; i < contador; i++){
         double nota = (x[i] + (2*y[i]))/3;
         if(nota >= 6){
             cout << fixed << setprecision(2) << aluno[i] << " " << nota << " Aprovado" << endl;
         } else{
             cout << fixed << setprecision(2) << aluno[i] << " " << nota << " Reprovado" << endl;
         }
     }
};


    int main(){
        TTurma t;
	    t.ler();
        t.listar();
        return 0;
    }