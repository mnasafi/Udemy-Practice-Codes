// Program finds the maximum of 2 numbers entered by user

#include <iostream>

using namespace std;

int main()
{

    float x, y;

    cout << "Enter 2 numbers to compare: ";

    cin >> x >> y;

    if (x > y)
    {
        cout << "The max # is: " << x << endl;

    } // end if

    else
    {
        cout << "The max # is: " << y << endl;

    } // end else

    return 0;

} // end main