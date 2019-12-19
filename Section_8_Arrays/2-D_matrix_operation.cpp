// Section 8.97: 2-D Arrays and Matrix operations

#include <iostream>

using namespace std;

int main()
{
    // initialize 2-D array
    int A[2][3] = {{6, 3, 7}, {9, 5, 4}};
    int B[2][3] = {{7, 1, 4}, {8, 3, 0}};
    int C[2][3]; // 2-d Array to store matrix operation result

    // matrix operation

    for (int i = 0; i < 2; i++)
    {
        // inner for loop
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];

        } // end inner loop

    } // end outer for loop

    // end matrix operation

    // display matrix op. result

    for (int i = 0; i < 2; i++)
    {
        // print row number
        cout << i << ": ";

        // inner loop
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        } // end inner loop

        // line break
        cout << endl;

    } // end outer loop

} // end main