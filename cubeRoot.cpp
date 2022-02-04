// cube root of a number
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "cuberoot is  : " << std::cbrt(num) << endl;

    return 0;
}