#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

class TMatriz {
	private:
		char x[1000][1000];
        char y[1000][1000];
        int coluna;
        int linha;
	public:
		int ler();
        int transposta();
		void mostrar();
};

int TMatriz::ler(){
    cin >> linha;
    cin >> coluna;
     for(int i = 0; i < linha; i++){
         for(int j = 0; j < coluna; j++){
             cin >> x[i][j];
        }
     }
};

int TMatriz::transposta(){
   	for(int i = 0; i < linha; i++) {
for(int j = 0; j < coluna; j++) {
            y[i][j] = x[j][i];
            cout << y[i][j];
		}
        }
     }

void TMatriz::mostrar(){
for(int i = 0; i < linha; i++){
         for(int j = 0; j < coluna; j++){
             cout << y[i][j];
        } 
        cout << endl;
     }
};

 int main(){
    TMatriz a;
	a.ler();
	a.transposta();
    a.mostrar();
    return 0;
    }