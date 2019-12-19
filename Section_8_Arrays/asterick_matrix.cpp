#include <iostream>
using namespace std;

void Draw(int row, int col)
{

    /* Draw Pattern given in description for n x n dimensions */

    for (int i = 0; i < row; i++)
    {

        /* inner loop */
        for (int j = 0; j < col; j++)
        {
            cout << "* ";

        } /* end outer loop */

        /* insert line break */

        cout << endl;

    } /* end outer for loop */

} /* end Draw() */

/* Driver main code below */

int main()
{
    // variable for user input to determine matrix size.
    int row, col;

    // prompt user for input
    cout << "Enter matrix row size: ";
    cin >> row;

    cout << "Enter matrix column size: ";
    cin >> col;

    // call the function to print asterik pattern by passing matrix size.
    Draw(row, col);

} // end main
