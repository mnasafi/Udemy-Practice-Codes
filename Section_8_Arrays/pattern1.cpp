// Section 8.93: Drawing a pattern using 2-D array with for loop

#include <iostream>

using namespace std;

int main()
{
    int counter = 1; // variable to display the pattern number

    // outer for loop
    for (int i = 0; i < 4; i++)
    {
        // inner for loop
        for (int j = 0; j < 4; j++)
        {
            cout << counter << " ";
            
            counter++; // increment counter

        } // end inner loop

        // line break
        cout << endl;

    } // end outer for loop

    return 0;

} // end main