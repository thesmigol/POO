#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

class Bhaskara{
    private:
        double A, B, C;

    public:
        void ler();
        double raiz1();
        double raiz2();
        int delta();
        int Aa();
};

    void Bhaskara::ler(){
         cin >> A >> B >> C;
    };

    int Bhaskara::Aa(){
        return A;
    };
    
    int Bhaskara::delta(){
        return ((B*B) - (4*A*C));
    };

    double Bhaskara::raiz1(){
        return ((-B) + sqrt((pow(B,2) - 4*A*C)))/(2*A);
    };

    double Bhaskara::raiz2(){
       return ((-B) - sqrt((pow(B,2) - 4*A*C)))/(2*A);
    };



int main() { 
    Bhaskara B;
    B.ler();
    if (B.Aa()==0 || B.delta()<0)
      cout << "Impossivel calcular" << endl;
    else {
      cout << fixed << setprecision(5);
      cout << "R1 = " << B.raiz1() << endl; 
      cout << "R2 = " << B.raiz2() << endl;
    }
    return 0;
}