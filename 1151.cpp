#include <stdio.h>
#include<iostream> //para usar cin e cout
#include<iomanip> //para formatar a saida
#include<string>
#include<cmath>
using namespace std;

int main ()
{
	int X = 0;
	int Y = 1;
	int FIBONACCI;
	int n;
	cin >> n;
	cout << "0";
 for (int i = 1; i < n; i++) {
		cout << " " << Y;
		FIBONACCI = Y;
		Y+= X;
		X = FIBONACCI;
	}
	cout << endl;
	return 0;
}