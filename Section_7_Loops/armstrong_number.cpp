// Program checks for ArmStrong number
// Section 7 - 77. Practice Prob.

#include <iostream>

using namespace std;

int main()
{

    int m, n, r, sum = 0;

    cout << "Enter N: ";
    cin >> n;

    // store initial input into m
    m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;

        sum = sum + (r * r * r);

    } // end while

    if (m == sum)
    {
        cout << m << " is Armstrong Number" << endl;
    }

    else
    {
        cout << m << " is not Armstrong Number" << endl;
    }

    return 0;
}