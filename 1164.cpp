#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;



int ehPerfeito(int num){
	  int soma = 0;

for (int i = 1; i < num; i++){
      if (num % i == 0){
        soma += i;
      }
    }
    if ( soma == num){
     return true;
    }else{
      return false;
    }

}

int main(void){ 
	int i,n,num; 
	cin >> n; 
	for(i=0; i<n; i++) 
	{ 
		cin >> num; 
		if (ehPerfeito(num)) 
			cout << num << " eh perfeito" << endl; 
		else 
			cout << num << " nao eh perfeito" << endl; // aqui tava faltando um <<
	} 
	return 0; 
} 