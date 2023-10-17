#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    float base, exponent, result;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    result = pow(base, exponent);

    cout << base << "^" << exponent << " = " << result;
    
    return 0;
}

    a = (int)(pow(5, 2) + 0.5); 
    b = round(pow(5,2)); 
    cout << a << endl << b ; 
  
    return 0; 
} 
