#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
 int x[10], i, CONTAGEM=0;
 for (i = 0; i < 10; i++) {
     cin >> x[i];
     	if (x[i] > 0) {
			cout << "X[" << CONTAGEM++ << "] = " << x[i] << endl; // saudades printf, olha essa bagunça aqui
		} else {
			cout << "X[" << CONTAGEM++ << "] = 1" << endl;
		}
 }
return 0;
}
