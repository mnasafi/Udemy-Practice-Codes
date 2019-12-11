// main driver for the arithmetic operation using switch case

#include <iostream>
#include "arithmetic_operation.h"

using namespace std;

int main()

{

    ArithOpt(7, 3, 3); // should output 21; 7 * 3 = 21

    // not good practice to use variable from the header file. 
    // r is defined in header file: arithmetic_operation.h
    if (r == 21)
    {
        cout << "Statement eval. to true" << endl;
    }

    return 0;

} // end main