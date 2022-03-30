     #include <iostream>
     
     using namespace std;
     
     int main() {
     

int x, y;
cin >> x;
cin >> y;

if (x%2 != 0){
    if (y%2 != 0){
        cout << '1' << endl;
    } else {
        cout << '0' << endl;
    }
} 
    else if(x%2 == 0){
if (y%2 == 0){
 cout << '1' << endl;
    } else {
        cout << '0' << endl;
    }
} 

     
     return 0;
     }