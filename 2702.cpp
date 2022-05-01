#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {

int a, b, c;
int x, y, z;
int fome;
fome = 0;

cin >> a >> b >> c;
cin.ignore();
cin >> x >> y >> z;

if(x > a){
fome = fome + (x - a);
}

if(y > b)
{
fome = fome + (y - b);
}

if(z > c){
fome = fome + (z - c);
}

cout << fome << endl;

return 0;
}
