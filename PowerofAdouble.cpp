#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float num, ans;
    cout << "enter a decimal number: ";
    cin >> num;

    ans = pow(num, num);

    cout << "The power is: " << ans << endl;

    return 0;
}