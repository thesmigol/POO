#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;


class Tupla{
    private:
		int X, Y;

    public:
        int Ler();
        void Cresc_Descr();
};

int Tupla::Ler(){
    cin >> X >> Y;
    return (X != Y);
}



void Tupla::Cresc_Descr(){
    if(X < Y){
    cout << "Crescente" << endl;
    } else {
        cout << "Decrescente" << endl;
    }
}


int main()
{
      Tupla a;
      while (a.Ler())
         a.Cresc_Descr(); 
}	