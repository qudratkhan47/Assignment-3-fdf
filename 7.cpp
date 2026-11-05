#include <iostream>
using namespace std;
int main()
{
    float attendance;
    cout << "Enter Attendance Percentage: ";
    cin >> attendance;
    if (attendance < 75)
    {
        cout << "Attendance Warning";
    }
    return 0;
}