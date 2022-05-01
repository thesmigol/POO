#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;
 
class TPoligono{
        int verts;
        double y[100];
        double x[100];
    public:
        void ler();
        double perimetro();
};

   void TPoligono::ler(){
        cin >> verts;
        for(int i = 0; i < verts; i++){
        cin >> x[i] >> y[i];
    }
    };

double TPoligono::perimetro(){
double per = 0;
int i;

	for(i = 1; i < verts; i++){
		per += sqrt( pow( ( x[i] - x[i-1] ) ,2) + pow( ( y[i] - y[i-1] ) ,2) );
	}
	per += sqrt( pow( ( x[i-1] - x[0] ) ,2) + pow( ( y[i-1] - y[0] ) ,2) );
	return per;
}


 int main(){
        TPoligono p;
	p.ler();
        cout << fixed << setprecision(2);
        cout << "perimetro - " << p.perimetro() << endl;
        return 0;
    }