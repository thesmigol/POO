#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
#include <string> //para usar o tipo string

using namespace std;

int main(void)
{
   string nome;
   int idade;
   double altura;

   cout << "Nome:";
 	 getline(cin, nome);//cin >> nome;
   cout << "Idade:";
   cin >> idade;
   cout << "Altura:";
   cin >> altura;

   cout << "Nome:" << nome << endl;
   cout << "Idade:" << idade << endl;
   cout << "Altura:" << altura << endl;
     
   return 0;
}
