#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;


int listarDivisores(int n){
    for(int i = 1; i <= n; i++){
            if(n % i == 0){
                cout << i << endl;
            }
    }
}


 int main(void) { int n;
  cin >> n ;
  listarDivisores(n); 
  return 0; 
  }