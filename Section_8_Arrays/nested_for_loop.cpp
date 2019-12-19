// Section 8.92: Nested For Loop - Demo

#include <iostream>

using namespace std;

int main()
{
    // outer loop
    for (int i = 1; i <= 5; i++)
    {
        cout << i << ": ";

        // inner loop
        for (int j = 1; j <= 5; j++)
        {
            cout << "(" << i << "," << j << ") ";

        } // end inner for-loop

        // line break
        cout << endl;

    } // end outer for-loop

    return 0;

} // end main