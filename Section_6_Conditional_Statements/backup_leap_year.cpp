// Section 6. 64: Practice coding - Calculate the leap year from user input

#include <iostream>

using namespace std;

int main()
{
    int year; // input variable

    cout << "Enter year: ";
    cin >> year;

    if (year % 4 == 0) // first if statement
    {
        // 2nd if
        if (year % 100 == 0) // checks for centurian leap year
        {
            // 3rd if
            if (year % 400 == 0) // century leap years must be divisible by 400
            {
                cout << year << " is a leap year" << endl;

            } // end 3rd if

            else
            {
                cout << year << " is not a leap year!" << endl;
            }

        } // end 2nd if

        // not centurian leap year, but year < 100 and year % 4 == 0
        else if (year < 100 && year % 4 == 0)
        {
            cout << year << " is a leap year" << endl;
        }

        else if (year < 100 && year % 4 != 0)
        {
            cout << year << " is not a leap year!" << endl;
        }

        // not centurian leap year, but

    } // end 1st if statement

    return 0;

} // end main