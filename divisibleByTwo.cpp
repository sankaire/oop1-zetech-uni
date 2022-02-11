#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;

    cout << "Enter a Number: ";
    cin >> a;

    // computation
    int result;
    result = a % 2;

    if (result == 0)
    {
        cout << a << "is even" << endl;
    }
    else
    {
        cout << a << "is odd" << endl;
    }

    return 0;
}