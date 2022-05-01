#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;
 
class TVetInt {
	private:
		int m[100];
        int w[100];
        int contador;	
	public:
		int ler();
		int inverter();
		void listar();
};

int TVetInt::ler(){
    cin >> contador;
	for(int i = 0; i < contador; i++){
        cin >> m[i];
    }
}

int TVetInt::inverter(){
    	for(int i = 0, j = contador - 1; i < contador; i++, j--){
            w[j] = m[i];
    }
}

void TVetInt::listar(){
for(int i=0; i < contador - 1 ;i++){
        cout << w[i] << " ";

    } 
    cout << w[contador - 1] << endl;
}

int main() { 
     TVetInt v;
     v.ler();
     v.inverter();
     v.listar();
     return 0;
}