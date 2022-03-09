#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
#include <string>

using namespace std;

int main() {

string frase = "AMO FAZER EXERCICIO NO URI";

cout << '<' + frase + '>' << endl;
cout << '<' << setw(30) << setfill(' ') << frase << '>' << endl;
cout << '<' + frase.substr(0,20) + '>' << endl;
cout << '<' + frase + '>' << endl;
cout << '<' << left << setw(30) << setfill(' ') << frase << '>' << endl;
cout << '<' + frase + '>' << endl;
cout << '<' << "          AMO FAZER EXERCICIO " << '>' << endl;
cout << '<' << "AMO FAZER EXERCICIO           " << '>' << endl;

    return 0;
}