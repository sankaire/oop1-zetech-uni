// power of the two numbers

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int base, exponent, result;
    cout << "Enter value to be powered: ";
    cin >> base;
    cout << "Enter value to power the first number: ";
    cin >> exponent;
    result = pow(base, exponent);
    cout << "Result=" << result << endl;
    return 0;
}