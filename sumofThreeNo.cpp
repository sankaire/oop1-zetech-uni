// sum and product of two numbers

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, sum, product;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    sum = a + b + c;
    product = a * b * c;

    cout << "The sum of the three numbers is: " << sum << endl
         << "The product of the three numbers is: " << product << endl;

    return 0;
}
