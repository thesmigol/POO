/* strlen example */
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
  
    int TOTAL, ENTRADA, Aux;
    char LEDS[101];
    
  
   cin >> ENTRADA;
   
    for(int i = 0; i < ENTRADA; i++){
            cin >> LEDS;
            Aux = 0;
            TOTAL = 0;
            while(true){
                        if(LEDS[Aux] == '1') TOTAL += 2;
                        else if(LEDS[Aux] == '2') TOTAL += 5;
                        else if(LEDS[Aux] == '3') TOTAL += 5;
                        else if(LEDS[Aux] == '4') TOTAL += 4;
                        else if(LEDS[Aux] == '5') TOTAL += 5;
                        else if(LEDS[Aux] == '6') TOTAL += 6;
                        else if(LEDS[Aux] == '7') TOTAL += 3;
                        else if(LEDS[Aux] == '8') TOTAL += 7;
                        else if(LEDS[Aux] == '9') TOTAL += 6;
                        else if(LEDS[Aux] == '0') TOTAL += 6;
                        else break;;
                        Aux++;
            }
            cout << TOTAL << " leds" << endl;
    }
return 0;
}
