#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida

using namespace std;

int main() {
 cout << setfill('-') << setw(39) << '-' <<  endl;

 cout << '|' << setfill(' ') << setw(37) << ' ' << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(37) << ' ' << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(37) << ' ' << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(37) << ' ' << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(37) << ' ' << '|' <<  endl;

 cout << setfill('-') << setw(39) << '-' <<  endl;
 
    return 0;
}