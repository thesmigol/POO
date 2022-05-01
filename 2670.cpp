#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main() {

   int COCO, FEZES, CACA;
   cin >> COCO >> FEZES >> CACA;
        if ((FEZES >= CACA && FEZES >= COCO)){
            
        }
        else if (CACA >= COCO && (COCO + FEZES) <= CACA){
        	cout << ((COCO * 4) + (FEZES * 2))) << endl;
            }
        else if (COCO >= CACA && (CACA + FEZES) <= COCO){
        	cout << ((CACA * 4) + (FEZES * 2))) << endl;
        }
        else{
        	cout << (CACA + COCO) * 2) << endl;
}

    

    return 0;
}