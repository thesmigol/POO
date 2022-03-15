#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
string STRING_1, STRING_2, STRING_3;
cin >> STRING_1;
cin >> STRING_2;
cin >> STRING_3;
if (STRING_1 == "vertebrado")
  if (STRING_2 == "ave")
    if (STRING_3 == "carnivoro")
     cout << "aguia" << endl;
    else
     cout << "pomba" << endl;
  else
    if (STRING_3 == "onivoro")
     cout << "homem" << endl;
    else
     cout << "vaca" << endl;
else
  if (STRING_2 == "inseto")
    if (STRING_3 == "hematofago")
     cout << "pulga" << endl;
    else
     cout << "lagarta" << endl;
  else
    if (STRING_3 == "hematofago")
     cout << "sanguessuga" << endl;
    else
     cout << "minhoca" << endl;

return 0;
}
