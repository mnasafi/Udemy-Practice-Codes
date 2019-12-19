// Section 8.98: 2D Arrays - Demo

#include <iostream>

using namespace std;

int main()
{
    // 2-D Array will be populated with user input
    int array[2][3];

    cout << "Enter numbers for array: ";

    // store input into 2-D array
    for (auto &x : array) // rows
    {
        for (auto &y : x) // columns
        {
            cin >> y; // store user's input

        } // end inner loop

    } // end input loop

    // print 2D array elements
    for (auto &x : array) // rows
    {
        for (auto &y : x) // col
        {
            cout << y << " ";

        } // end inner loop

        // line break
        cout << endl;

    } // end print loop

    return 0;

} // end main
