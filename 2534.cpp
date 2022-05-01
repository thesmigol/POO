#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;
int main(void) 
{ 
	int n,q,pos;	
	int notas[2000];
        
	while ( ler(n, q) ){
		lerVetor(notas,n);
		qsort(notas, n, sizeof(int), compInt);  //https://www.galirows.com.br/meublog/programacao/utilizacao-funcao-qsort/
                for (int i=0; i<q;i++) 
                {
		    pos = lerInt();
		    cout << notas[pos-1] << endl;
                }
	}
	return 0;
}