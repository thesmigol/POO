#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
using namespace std;

int main() {

     cout << setfill(' ') << setw(8) << "A" << endl;
     cout << setfill(' ') << setw(7) << "B" << setw(2) << "B" << endl;
     cout << setfill(' ') << setw(6) << "C" << setw(4) << "C" << endl;
     cout << setfill(' ') << setw(5) << "D" << setw(6) << "D" << endl;
     cout << setfill(' ') << setw(4) << "E" << setw(8) << "E" << endl;
     cout << setfill(' ') << setw(5) << "D" << setw(6) << "D" << endl;
     cout << setfill(' ') << setw(6) << "C" << setw(4) << "C" << endl;
     cout << setfill(' ') << setw(7) << "B" << setw(2) << "B" << endl;
     cout << setfill(' ') << setw(8) << "A" << endl;

    return 0;
}