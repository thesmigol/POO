#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida

using namespace std;

int main(void)
{
   cout << setprecision(2) << fixed;
   cout << "Oi, pessoal" << endl;
   double a;
   a=-11.10;
   cout << "a = R$ " << a << endl;
   cout << "a = R$ " << setw(10) << a << endl;
   cout << "a = R$ [" << left  << setw(10) << a << ']' << endl;
   cout << "a = R$ [" << setw(10) << a << ']' << endl;
   cout << "a = R$ [" << right << setw(10) << a << ']' << endl;
   cout << "a = R$ [" << setw(10) << a << ']' << endl;
   cout << "a = R$ [" << setfill('0') << setw(10) << a << ']' << endl;
   cout << "a = R$ [" << setfill(' ') << setw(10) << a << ']' << endl;
   cout << "a = R$ [" << setfill('.') << setw(10) << a << ']' << endl;
   cout << left;
   cout << "a = R$ [" << setfill('0') << setw(10) << a << ']' << endl;
   cout << "a = R$ [" << setfill(' ') << setw(10) << a << ']' << endl;
   cout << "a = R$ [" << setfill('.') << setw(10) << a << ']' << endl;
   cout << internal;
   cout << "a = R$ [" << setfill('0') << setw(10) << a << ']' << endl;
   cout << "a = R$ [" << setfill(' ') << setw(10) << a << ']' << endl;
   cout << "a = R$ [" << setfill('.') << setw(10) << a << ']' << endl;
   return 0;
}
