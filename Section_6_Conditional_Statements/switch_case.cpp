// Section 6 - 59. Switch Case

#include <iostream>

using namespace std;

int main()
{
    // declare variables
    int day;
    bool repeat_program;
    char prompt_input;

    do
    {

        cout << "Enter Day Number: ";

        cin >> day;

        // switch case to select the correct condition based on user input
        switch (day)
        {
        case 1:
            cout << "Monday" << endl;
            break;

        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        case 4:
            cout << "Thursday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;

        case 6:
            cout << "Saturday" << endl;
            break;

        case 7:
            cout << "Sunday, Funday :) " << endl;
            break;

        default:
            cout << "Invalid Day Entered!" << endl;

        } // end switch

        // prompt user to repeat program
        cout << "Repeat again? Y / N: ";

        cin >> prompt_input;

        if (prompt_input == 'N' || prompt_input == 'n')
        {
            repeat_program = false;
        }
        else if (prompt_input == 'Y' || prompt_input == 'y')
        {
            repeat_program = true;
        }

        else
        {
            cout << "Invalid choice! Enter Y or N only." << endl;
        }

        // end do
    } while (repeat_program != false);

    return 0;

} // end main