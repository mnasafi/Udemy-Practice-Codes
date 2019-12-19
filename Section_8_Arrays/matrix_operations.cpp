// Section 2.99: Matrix Operations Practice

#include <iostream>

using namespace std;

int main()
{
    int A[2][3] = {3, 3, 3, 3, 3, 3};
    int B[2][3] = {4, 4, 4, 4, 4, 4};
    int C[2][3]; // array for storing matrix operation results

    // Addition matrix operation
    for (int i = 0; i < 2; i++) // row
    {
        // inner loop
        for (int j = 0; j < 3; j++) // col.
        {
            C[i][j] = A[i][j] + B[i][j];

        } // end inner loop

    } // end outer loop

    // Display matrix operation result
    for (int i = 0; i < 2; i++) // row
    {
        // inner loop
        for (int j = 0; j < 3; j++) // col
        {
            cout << C[i][j] << " ";

        } // end inner loop

        // line break
        cout << endl;

    } // end outer loop

} // end main