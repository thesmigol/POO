#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
  double ENTRADA[100];
  int i;
    for(i = 0; i <= 99; i++)
      cin >> ENTRADA[i];
    for(i = 0; i <= 99; i++) {
    if(ENTRADA[i] <= 10.0)
      cout << fixed << setprecision(1) << "A[" << i << "] = " << ENTRADA[i] << endl;
    }
return 0;
}
