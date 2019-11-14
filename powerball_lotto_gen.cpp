// This application generates random lottery numbers for powerball lotto.

#include <iostream>
#include <vector>
#include <stdio.h>  // NULL
#include <stdlib.h> // srand, rand
#include <time.h>   // time

#include <random>
#include <algorithm> // random_shuffle()
#include <numeric>   // iota
#include <unistd.h>  // sleep()

using namespace std;

/* seed for random_shuffle generator, otherwise built-in generator 
    creates same shuffle sequence
*/
int myRandom(int i)
{
    return rand() % i;
}

int main()
{
    char promptInput;
    bool restart = false;

    /* initialize random seed:  -- only once HERE */
    srand(unsigned(time(0)));

    vector<int> vec(69); // vector size 69 of integer type

    iota(vec.begin(), vec.end(), 1); // fill vector with values [1-69]

    // cout << "Vector at 49th element before shuffle is: " << vec.at(49) << endl;

    // insert line break
    cout << endl;

    // Display greetings once at program start
    cout << "This program generates random PowerBall lottery numbers. Good luck playing!" << endl;

    // insert line break
    // cout << endl;

    do
    {
        /*  shuffles same sequence every time. how to randomize it?
            
            solution:
            use myRandom function to seed the random shuttle generator

        */

        random_shuffle(vec.begin(), vec.end(), myRandom);

        int mega = 0;

        // initiliaze a int array of size 5
        int wBallArray[5];

        // generate 5 unique #s and store in array -- range: 1-69
        // check for uniqueness by iterating through array

        /*

		   for (int i = 0; i < 10; i++)
		   {
		   cout << vec[i] << " " << endl;

		   } // end for

*/

        for (int i = 0; i < 5; i++)
        {
            wBallArray[i] = vec[i];

        } // end for loop

        // generate 1 random mega # - range: 1-26
        mega = rand() % 26 + 1;

        // line break
        cout << endl;

        // display the #s
        for (int i = 0; i < 5; i++)
        {
            // i + 1 to start listing WhiteBalls at 1 instead of zero
            cout << i + 1 << ". White Ball: " << wBallArray[i] << endl;

        } // end for-loop

        cout << "Mega is: " << mega << endl;

        // line break
        cout << endl;

        // display vector element at(i)
        // cout << "Vector at 49 element after shuffle is: " << vec.at(49) << endl;

        // cout << "Vector at 34th: " << vec[34] << endl;

        // line break
        cout << endl;

        cout << "Generate again? Y or N: ";

        cin >> promptInput;

        if (promptInput == 'Y' || promptInput == 'y')
        {
            restart = true;
        }

        else
        {
            restart = false;
        }

    } while (restart != false);

    cout << "Finished... bye!" << endl;

    return 0;

} // end main