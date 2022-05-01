#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
 int kkk, i, CONTAGEM=0;
      cin >> kkk;
 for (i = 0; i < 10; i++) {
			cout << "N[" << CONTAGEM++ << "] = " << kkk << endl;
            kkk = (kkk * 2);
		
 }
return 0;
}
