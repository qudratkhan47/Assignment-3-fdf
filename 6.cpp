#include <iostream>
using namespace std;
int main()
{
    int hours, studentID;
    cout << "Enter Parking Hours: ";
    cin >> hours;
    cout << "Enter Student ID (1 for Yes, 0 for No): ";
    cin >> studentID;
    if (studentID == 1 && hours >= 2)
    {
        cout << "Student Parking Discount Applicable";
    }
    return 0;
}