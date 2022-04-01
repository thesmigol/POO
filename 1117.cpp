#include <stdio.h>
#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
#include<string>
#include<cmath>
using namespace std;

int main(){
    
    float media, x, y, z;
    y = 0;
    z = 0;
	 cout << fixed << setprecision(2);
    while(true){
		
                cin >> x;
                if(x < 0 || x > 10){
                      cout << "nota invalida" << endl;
                }
                else if(z == 0){
                      y = x;
                      z = 1;
                }else{
					media = (y+x)/2;
					cout << "media = " << media << endl;
                      break;
                }
    } 
    return 0;
}