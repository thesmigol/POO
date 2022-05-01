#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;




int somaImpares(int x, int y){
	int somadosImpares = 0;
if(x % 2 != 0){
	somadosImpares += x;
}else{
x += 1;
	somadosImpares += x;
}
for(int i = 0; i < y - 1; i++){
x += 2; 
	somadosImpares += x;           
}
	return somadosImpares;
}


int main(void) 
{ 
	int i,n,x,y; 
	cin >> n; 
	for(i=0; i<n; i++) 
	{ 
		cin >> x >> y; 
		cout << somaImpares(x,y) << endl; 
	} 
	return 0; 
} 

