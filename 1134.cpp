#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int
main ()
{

  int ALCOOL = 0, DIESEL = 0, GASOLINA = 0, ENTRADA = 0;


  while (ENTRADA != 4){
      cin >> ENTRADA;
    
      switch(ENTRADA) {
  case 1:
   ALCOOL = (ALCOOL + 1);
    break;
  case 2:
    GASOLINA = (GASOLINA + 1);
    break;
  case 3:
    DIESEL = (DIESEL + 1);
    break;
  
}
    
    }

  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << ALCOOL << endl;
  cout << "Gasolina: " << GASOLINA << endl;
  cout << "Diesel: " << DIESEL << endl;

  return 0;
}
