#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {

int MI_VE_UM, E_UM;
cin >> MI_VE_UM >> E_UM;
cout << fixed << setprecision(2);
    switch(MI_VE_UM){
case 1: cout << "Total: R$ " << (4.00 * E_UM) << endl;
    break;
case 2:
  cout << "Total: R$ " << (4.50 * E_UM) << endl;
    break;
case 3:
   cout << "Total: R$ " << (5.00 * E_UM) << endl;
    break;
case 4:
   cout << "Total: R$ " << (2.00 * E_UM) << endl;
    break;
case 5:
      cout << "Total: R$ " << (1.50 * E_UM) << endl;
    break;
}
return 0;
}
