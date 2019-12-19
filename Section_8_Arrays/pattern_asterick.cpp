// Section 8.94: Drawing asterick pattern using 2-D array with 'For loop'

#include <iostream>

using namespace std;

int main()
{
    // first pattern
    cout << "-- 1st Pattern --" << endl;

    // outer loop
    for (int i = 0; i < 4; i++)
    {

        // inner loop
        for (int j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                cout << "* ";
            }

        } // end inner loop

        cout << endl;

    } // end outer loop

    // line breaks
    cout << endl;

    // 2nd pattern
    cout << "-- 2nd Pattern --" << endl;

    // outer loop
    for (int i = 0; i < 4; i++)
    {
        // inner loop
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                cout << " ";
            }

            else
            {
                cout << "*";
            }

        } // end inner loop

        // line break
        cout << endl;

    } // end outer loop

    // end 2nd pattern

    // line break
    cout << endl;
    
    // 3rd pattern
    cout << "-- 3rd Pattern --" << endl;

    // outer loop
    for (int i = 0; i < 4; i++)
    {
        // inner loop
        for (int j = 0; j < 4; j++)
        {
            if (i + j >= 3)
            {
                cout << "*";

            } // end if

            else
            {
                cout << " "; // insert space
            }

        } // end inner loop

        // line break
        cout << endl;

    } // end outer loop

    // end 3rd pattern

    return 0;

} // end main