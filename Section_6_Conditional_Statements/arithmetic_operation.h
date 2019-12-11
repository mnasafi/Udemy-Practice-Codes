// header file for Arithmatic Operation using switch case
// x and y are 2 values
// choice:
// 1 -- Add 2 numbers
// 2 -- Subtract 2 numbers
// 3 -- Multiply 2 numbers
// 4 -- Divide 2 numbers

#ifndef ARITHMETIC_OPERATION_H
#define ARITHMETIC_OPERATION_H

#include <iostream>

using namespace std;

int r = 0; // holds operation result

void ArithOpt(int x, int y, int choice)
{

    switch (choice)
    {

    // add
    case 1:
        cout << x + y << endl;

        break;

    // sub
    case 2:
        cout << x - y << endl;

        break;

    // multiply
    case 3:
        cout << x * y << endl;
        r = x * y;

        break;

    // divide
    case 4:
        cout << x / y << endl;

        break;

    } // end switch case

} // end ArithOpt()

#endif // ARITHMETIC_OPERATION_H