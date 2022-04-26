/* strlen example */
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main(){
	double MATRIZ[12][12], RESULTS = 0;
	int i, j, AUX = 0;
	char OPERACAO;

	cin >> OPERACAO;

	for(i = 0; i < 12; i++)
		for(j = 0; j < 12; j++){

				cin >> MATRIZ[i][j];
			 if(j > i && (j+i) < 11){
                        RESULTS += MATRIZ[i][j];
                        AUX++;
                   }
            }


	if (OPERACAO == 'M')
	{
        cout << fixed << setprecision(1);
    	RESULTS = RESULTS / AUX; 
    	cout << RESULTS << endl;
	}

    if (OPERACAO == 'S')
    {
        cout << fixed << setprecision(1);
    	cout << RESULTS << endl;
    }

	return 0;
}