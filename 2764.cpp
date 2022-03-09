#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida

using namespace std;

int main() {
double dia, mes, ano;

    cin >> dia;
    cin.ignore();
    cin >> mes;
    cin.ignore();
    cin >> ano;

    cout << setw(2) << setfill('0') << mes << "/" << setw(2) << setfill('0') << dia << "/" << setw(2) << setfill('0') << ano << endl; 
    cout << setw(2) << setfill('0') << ano << "/" << setw(2) << setfill('0') << mes << "/" << setw(2) << setfill('0') << dia << endl;
    cout << setw(2) << setfill('0') << dia << "-" << setw(2) << setfill('0') << mes << "-" << setw(2) << setfill('0') << ano << endl;
    
    return 0;
}