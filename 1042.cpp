#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int menor(int a, int b, int c){
int menorzin;
if(a < b){
 menorzin = a;
} else {
menorzin = b;
}
if(menorzin < c){
	return menorzin;
} else {
	return c;
} 
}

int maior(int a, int b, int c){
int grande;
if(a > b){
 grande = a;
} else {
grande = b;
}
if(grande > c){
	return grande;
} else {
	return c;
} 
}

int escrever(int x, int y, int z){
cout << x << endl << y << endl << z << endl;
};


int main() 
{ 
	int a,b,c,i,x,y,z; 
	cin >> a >> b >> c; 
	x = a; y = b; z = c; 
	x = menor(a,b,c);
        z = maior(a,b,c);
        y = a+b+c-x-z;
	escrever(x,y,z);
	cout << endl;
        escrever(a,b,c); 
	return 0; 
} 