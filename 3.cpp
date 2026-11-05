#include <iostream>
using namespace std;
int main()
{
    int battery;
    cout << "Enter Battery Percentage: ";
    cin >> battery;
    if (battery <= 15)
    
        cout << "Low Battery! Please Charge Your Phone";
        return 0;
   
    }