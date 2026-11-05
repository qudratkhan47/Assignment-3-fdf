

#include <iostream>
using namespace std;
int main()
{
    int speed, limit;
    cout << "Enter Vehicle Speed: ";
    cin >> speed;
    cout << "Enter Speed Limit: ";
    cin >> limit;
    if (speed > limit)
    
        cout << "Speed Limit Violated";
    
    return 0;
}