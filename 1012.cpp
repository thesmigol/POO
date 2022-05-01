#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {

    double a, b, c, TRIANGULO, CIRCULO, TRAPEZIODESCENDENTE, BOLAQUADRADA, RETANGULO, PI;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3);

    TRIANGULO = (a * c)/2;
	PI = 3.14159;
	CIRCULO = (PI * pow(c,2));
	TRAPEZIODESCENDENTE = ((a+b)*c)/2;
	BOLAQUADRADA = pow(b,2);
	RETANGULO = a * b;

    cout << "TRIANGULO: " << TRIANGULO << endl;
	cout << "CIRCULO: " << CIRCULO << endl;
	cout << "TRAPEZIO: " << TRAPEZIODESCENDENTE << endl;
	cout << "QUADRADO: " << BOLAQUADRADA << endl;
	cout << "RETANGULO: " << RETANGULO << endl;

    return 0;
}