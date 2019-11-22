#include <iostream>
#include <cmath>
using namespace std;

void Roots(float a, float b, float c)
{

    //calculate d
    // print nature of roots using nested if

    // typedef  declaration
    typedef float roots, descriminant;

    roots r1, r2;
    descriminant d = (b * b) - 4 * a * c;

    if (d == 0)
    {
        r1 = -b / (2 * a);

        // prevent -0 display as root
        if (r1 == -0)
        {
            cout << "Real and Equal Root: 0" << endl;
        }
        else
        {
            cout << "real and equal root: " << r1 << endl;
        }
    } // end if

    else if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        cout << "real and unequal "
             << "Root 1: " << r1 << " "
             << "Root 2: " << r2 << endl;
    } // end else if

    else
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << "Imaginary Root 1: " << r1 << endl;
        cout << "Imaginary Root 2: " << r2 << endl;
    } // end else

} // end Roots

int main()

{
    float a, b, c = 0.0;

    cout << "Enter quadratic values for a, b, c: ";

    cin >> a >> b >> c;

    // catch divide by zero problem - 'a' can't be zero
    if (a != 0)
    {
        // invoke the Roots function and pass user input
        Roots(a, b, c);
    }

    // a == 0 case
    else
    {
        cout << "Error! 'a' can't be zero - Divison by zero problem. "
             << "Try again." << endl;
    }

    // hard coded function invoke
    // Roots(1, 12, 9);

    return 0;
} // end main