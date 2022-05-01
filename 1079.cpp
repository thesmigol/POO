#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

class Media{
    private:
    double A, B, C, X, Y, Z;
    public:
    double setPesos(double x, double y, double z);
    double setValores(double a, double b, double c);
    double media();
};

double Media::setPesos(double x, double y, double z){
 X = x;
 Y = y;
 Z = z;

};

double Media::setValores(double a, double b, double c){
 A = a;
 B = b;
 C = c;
};

double Media::media(){
return ((A * X + B * Y) + C * Z) / (X + (Y + Z));
};


int main() {
    int N,i;
    Media m;
    cin >> N;
    m.setPesos(2,3,5);
    for(i=0;i<N;i++)
    {
	double v1,v2,v3;
	cin >> v1 >> v2 >> v3;
	m.setValores(v1,v2,v3);
        cout << fixed << setprecision(1) << m.media() << endl; 
    }
    return 0;
}