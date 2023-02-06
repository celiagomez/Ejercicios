#include <iostream>
#include <string>

using namespace std; 

int main () {

    int num1, x; 

    cout << "Introduce num: ";

    cin >> num1;

    if (num1 == 0 || num1 == 1 || num1 == 4) {
        cout << "No es primo"<< endl; 
    }else { 
        x = 2; 
        while(num1%x!=0)//mientras el número sea divisible por el divisor
        { 
            x++;
        }
        if (num1 == x ){

            cout << " El número es primo" << endl;   
        }
        else {
            cout << " No es primo" << endl;
            
        }
    }
return 0; 
}

