#include <stdio.h>
#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
#include<string>
#include<cmath>
using namespace std;

int main() {
	int A, B, C, X;
	int EUSOUMAIOR, MENTIRAEUQSO;
	cin >> A;
    cin >> B;
    cin >> C;
	X = (A+B+abs(A-B))/2;
	EUSOUMAIOR = (X+C+abs(X-C))/2;
    cout << EUSOUMAIOR << " eh o maior" << endl;
    return 0;
}