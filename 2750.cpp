#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida

using namespace std;

int main() {
 
 cout << setfill('-') << setw(39) << '-' <<  endl;
 cout << '|' << setfill(' ') << setw(9) << "decimal" << setfill(' ') << setw(3) << '|' << setfill(' ') << setw(2) << ' ' << "octal" << ' ' << setfill(' ') << setw(2) << '|' << setfill(' ') << setw(2) << ' ' << "Hexadecimal" << setfill(' ') << setw(2) << ' ' << '|' <<  endl;
 cout << setfill('-') << setw(39) << '-' <<  endl;

 cout << '|' << setfill(' ') << setw(7) << "0" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "0" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "0" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "1" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "1" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "1" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "2" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "2" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "2" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "3" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "3" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "3" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "4" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "4" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "4" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "5" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "5" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "5" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "6" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "6" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "6" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "7" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "7" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "7" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "8" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "10" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "8" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "9" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "11" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "9" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "10" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "12" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "A" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "11" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "13" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "B" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "12" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "14" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "C" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "13" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "15" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "D" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "14" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "16" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "E" << setfill(' ') << setw(8) << '|' <<  endl;
 cout << '|' << setfill(' ') << setw(7) << "15" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(5) << "17" << setfill(' ') << setw(5) << '|' << setfill(' ') << setw(7) << ' ' << "F" << setfill(' ') << setw(8) << '|' <<  endl;


 cout << setfill('-') << setw(39) << '-' <<  endl;

    return 0;
}