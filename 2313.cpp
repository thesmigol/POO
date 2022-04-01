#include <stdio.h>
#include<iostream> //para usar cin e cout
#include<iomanip> //para f||matar a saida
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int A,B,C;
    string TIPO = "" ;
    cin >> A >> B >> C;
    if(A+C>B){
    if((A != B && B == C) || ( A == C && A != B) || ( A == B && C != B))
        TIPO = "Valido-Isoceles";
    else if(A == B && A == C)
        TIPO = "Valido-Equilatero" ;
    else if(A != B && B != C && A != C)
        TIPO = "Valido-Escaleno";
    }
    else{
        TIPO = "Invalido";
    }
    if(TIPO != "Invalido"){
      if(pow(A,2) == pow(B,2) + pow(C,2) || pow(B,2) == pow(A,2) + pow(C,2) || pow(C,2) == pow(A,2) + pow(B,2))
        cout << TIPO << endl << "Retangulo: S" <<endl ;
       else
        cout << TIPO << endl << "Retangulo: N" << endl;
    }
    else
        cout << TIPO << endl;

    return 0;
}
