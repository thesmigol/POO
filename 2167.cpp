#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {
        int VELOCIDADE_DO_MOTOR, R[256];
        bool CHK = true;
cin >> VELOCIDADE_DO_MOTOR;
        for(int i = 0; i < VELOCIDADE_DO_MOTOR; i++){
cin >> R[i]; 
}
        for(int i = 0; i < VELOCIDADE_DO_MOTOR - 1; i++){
        if(R[i+1] < R[i]){
CHK = false;
cout << i + 2 << endl;
        break;
        }
}
        if(CHK)
cout << 0 << endl;
return 0;
}
