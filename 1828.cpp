#include <stdio.h>
#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
#include<string>
#include<cmath>
using namespace std;

int main()
{
	string Sheldon, Raj;
	
	int caso = 1;	
	int T;
	
	cin >> T;
	
	 for (int i = 0; i < T; i++) {
		cin >> Sheldon >> Raj;
		cout << "Caso #" << caso++ << ": ";
		if (Sheldon == Raj){
                  cout << "De novo!" << endl;
   }
		else if (Sheldon == "tesoura" && Raj == "papel"){ 
    cout << "Bazinga!" << endl;
   }
		else if (Raj == "tesoura" && Sheldon == "papel"){ 
    cout << "Raj trapaceou!" << endl;
   }
		else if (Sheldon == "papel" && Raj == "pedra"){ 
    cout << "Bazinga!" << endl;
   }
		else if (Raj == "papel" && Sheldon == "pedra"){ 
    cout << "Raj trapaceou!" << endl;
   }
		else if (Sheldon == "pedra" && Raj == "lagarto"){ 
    cout << "Bazinga!" << endl;
   }
		else if (Raj == "pedra" && Sheldon == "lagarto"){ 
    cout << "Raj trapaceou!" << endl;
   }
		else if (Sheldon == "lagarto" && Raj == "Spock"){ 
    cout << "Bazinga!" << endl;
   }
		else if (Raj == "lagarto" && Sheldon == "Spock"){ 
    cout << "Raj trapaceou!" << endl;
   }
		else if (Sheldon == "Spock" && Raj == "tesoura"){ 
    cout << "Bazinga!" << endl;
   }
		else if (Raj == "Spock" && Sheldon == "tesoura"){ 
    cout << "Raj trapaceou!" << endl;
   }
		else if (Sheldon == "tesoura" && Raj == "lagarto"){ 
    cout << "Bazinga!" << endl;
   }
		else if (Raj == "tesoura" && Sheldon == "lagarto"){ 
    cout << "Raj trapaceou!" << endl;
   }
		else if (Sheldon == "lagarto" && Raj == "papel"){ 
    cout << "Bazinga!" << endl;
   }
		else if (Raj == "lagarto" && Sheldon == "papel"){ 
    cout << "Raj trapaceou!" << endl;
   }
		else if (Sheldon == "papel" && Raj == "Spock"){ 
    cout << "Bazinga!" << endl;
   }
		else if (Raj == "papel" && Sheldon == "Spock"){ 
    cout << "Raj trapaceou!" << endl;
   }
		else if (Sheldon == "Spock" && Raj == "pedra"){ 
    cout << "Bazinga!" << endl;
   }
		else if (Raj == "Spock" && Sheldon == "pedra"){ 
    cout << "Raj trapaceou!" << endl;
   }
		else if (Sheldon == "pedra" && Raj == "tesoura"){ 
    cout << "Bazinga!" << endl;
   }
		else if (Raj == "pedra" && Sheldon == "tesoura"){ 
    cout << "Raj trapaceou!" << endl;
   }
	}
}