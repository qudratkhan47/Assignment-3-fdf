#include <iostream>
using namespace std;
int main()
{
    int days;
    cout << "Enter Overdue Days: ";
    cin >> days;
    if (days > 0)
    {
        cout << "Late Return: Fine Applicable";
    }
    return 0;
}