#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
#include <string>

using namespace std;

int main() {

string frase = "AMO FAZER EXERCICIO NO URI";
cout << '<' + frase + '>' << endl;
cout << '<' << setw(30) << setfill(' ') << frase << '>' << endl;
cout << '<' + frase.substr(0,20) + '>' << endl;
    return 0;
}