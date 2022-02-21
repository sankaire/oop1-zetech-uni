#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int r;
    const int pie = 3.142;
    int area;

    cout << "Enter Radius: ";
    cin >> r;

    // logic
    area = pie * r * r;

    cout << "area is: " << area << endl;

    return 0;
}
