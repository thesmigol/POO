#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;
int main(void) 
{ 
	int vet[5]; 
	char Letra; 
	ler5Cartas(vet); 
	letra = cresc_descr_nulo(vet); 
	cout << letra << endl; 
	return 0; 
} 