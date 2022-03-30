#include <stdio.h>
#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
#include<string>
#include<cmath>
using namespace std;

int main(){
    
    int x, i, fat = 1;
    
    cin >> x;
    for(i = 0; i < (x-1); i++){
            fat *= (x - i);
    }
    cout << fat << endl;
    return 0;
}