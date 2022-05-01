#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
int T, N;
int i, o;
long long fib[61];
    cin >> T;
    fib[0] = 0;
    fib[1] = 1;
for(int o = 2; o <= 60; o++){
fib[o] = fib[o-2] + fib[o-1];
}
for(int i = 0; i < T; i++){
    cin >> N;
    cout << "Fib(" << N << ") = " << fib[N] << endl;
}
return 0;
}
