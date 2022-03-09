#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida

using namespace std;

int main() {
 cout << setfill('-') << setw(39) << '-' <<  endl;

 cout << '|' << "x = 35" << setfill(' ') << setw(31) << ' ' << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(37) << ' ' << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(16) << ' ' << "x = 35" << setw(15) << ' ' << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(37) << ' ' << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(31) << ' ' << "x = 35" << '|' <<  endl;

 cout << setfill('-') << setw(39) << '-' <<  endl;
 
    return 0;
}