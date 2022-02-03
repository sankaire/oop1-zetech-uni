#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter The First Number: ";
    cin >> a;
    cout << "Enter The Second Number: ";
    cin >> b;
    cout << "Enter The third Number: ";
    cin >> c;

    int sum;
    int product;
    sum = a + b + c;
    product = a * b * c;

    cout << "The sum of the three numbers is: " << sum << endl;
    cout << "The product of the three numbers is: " << product << endl;

    return 0;
}
