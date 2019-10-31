#include <iostream>

using namespace std;

// declare function

int addition(int a, int b)
{
    return a + b;

} // end addition()

int main()
{
    int a, b, c;

    cout << "Enter two numbers to add: ";

    // how to streamline inputting numbers at same time from cin?
    /* cin >> a, b; */

    // proper method is: cin >> a >> b;

    cin >> a >> b;

    // invoke the addition function and assign value to c
    c = addition(a, b);

    // print addition result
    cout << a << " + " << b << " is: " << c << endl;

    // check if addition results in even/odd result

    if (c % 2 == 0)
    {
        cout << c << " is even #" << endl;
    }

    else
    {
        cout << c << " is odd #" << endl;
    }

    return 0;
} // end main