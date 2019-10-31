// This application generates random lottery numbers for powerball lotto.

#include <iostream>

#include <stdio.h>  // NULL
#include <stdlib.h> // srand, rand
#include <time.h>   // time

#include <unistd.h> // sleep()

using namespace std;

int main()
{
    int mega = 0;

    /* initialize random seed:  -- only once HERE */
    srand(time(NULL));

    // initiliaze a int array of size 5
    int wBallArray[5];

    // generate 5 unique #s and store in array -- range: 1-69
    // check for uniqueness by iterating through array

    // for now don't worry uniqueness
    for (int i = 0; i < 5; i++)
    {
        wBallArray[i] = rand() % 69 + 1;

    } // end for loop

    // generate 1 random mega # - range: 1-26
    mega = rand() % 26 + 1;

    // display the #s
    for (int i = 0; i < 5; i++)
    {
        cout << i << ". White Ball: " << wBallArray[i] << endl;

    } // end for-loop

    cout << "Mega is: " << mega << endl;

    cout << "Program has a bug. Need to prevent duplicate WB #s" << endl;

    return 0;

} // end main