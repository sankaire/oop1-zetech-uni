#include <iostream>
using namespace std;

struct student
{
    int Admission_Number = 0005;
    int Age = 23;
    int marks = 450;
};

int main()
{
    student s;
    cout << s.Admission_Number << endl;
    cout << s.Age << endl;
    cout << s.marks << endl;
    return 0;
}
