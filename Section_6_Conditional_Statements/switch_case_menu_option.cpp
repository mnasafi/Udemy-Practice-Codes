// Section 6 - 62: Practice Problem - Switch Case Program using Menu Options

#include <iostream>

using namespace std;

int main()
{

    cout << "Menu" << endl;

    cout << "1. Add\n"
         << "2. Subtract\n"
         << "3. Multiply\n"
         << "4. Division\n";

    int option;

    cout << "Enter your choice: ";

    cin >> option;

    float a, b, c;

    cout << "Enter 2 numbers: ";

    cin >> a >> b;

    // catch divide by zero error

    if (b != 0)
    {

        switch (option)
        {
        case 1:
            c = a + b;
            break;

        case 2:
            c = a - b;
            break;

        case 3:
            c = a * b;
            break;

        case 4:
            c = a / b;
            break;

        default:
            cout << "Invalid Option Entered!" << endl;

        } // end switch

        // display the operation result
        cout << "The result of the option is: " << c << endl;

    } // end if(b !=0)

    // prompt error msg division by zero
    else
    {
        cout << "Can not divide " << a << " by " << b << "\n"
             << "Divide by zero error." << endl;
    }

    return 0;

} // end main