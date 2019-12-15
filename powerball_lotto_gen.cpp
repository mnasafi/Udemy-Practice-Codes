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

// using namespace std::cout;
// using namespace std::endl;

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

    int user_input_wball[5]; // input var. for white balls
    int user_input_mega;     // input var. for mega number

    /* initialize random seed:  !-- ONLY ONCE HERE --! */
    srand(unsigned(time(0)));

    vector<int> vec(69); // vector size 69 of integer type

    iota(vec.begin(), vec.end(), 1); // fill vector with values [1-69] for white balls

    // for reference purposes only - do not dispaly
    // cout << "Vector at 49th element before shuffle is: " << vec.at(49) << endl;

    // insert line break
    cout << endl;

    // Display greetings once at program start
    cout << "This program generates random PowerBall lottery numbers. Good luck playing!" << endl;

    // insert line break
    // cout << endl;

    // prompt user for lotto number input
    cout << "Enter 5 lottory numbers (1-69): ";

    // store white ball numbers into array
    for (int i = 0; i < 5; i++)
    {
        cin >> user_input_wball[i];

    } // end for

    // mega number prompt and storing into array
    cout << "Enter Mega Number (1-26): ";

    cin >> user_input_mega;

    if (user_input_mega < 1 || user_input_mega > 26)
    {
        cout << "Invalid number entered for Mega number. Must be range 1-26!" << endl;
        cout << "Try again ... exiting" << endl;

        // exit program
        return 0;

    } // end if

    // start shuffled powerBall lottery number generation

    do
    {
        /*  shuffles same sequence every time. how to randomize it?
            
            solution:
            use myRandom function to seed the random shuttle generator

        */

        // comes from the <algorithm> library
        // generates randomized shuffled vector each time
        // myRandom provies the seed for random shuffle generator - very crucial, otherwise same shuffle sequence each time.
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

        // insert line break
        cout << endl;

        cout << "Mega is: " << mega << endl;

        // line break
        cout << endl;

        // display vector element at(i)
        // cout << "Vector at 49 element after shuffle is: " << vec.at(49) << endl;

        // cout << "Vector at 34th: " << vec[34] << endl;

        // line break
        cout << endl;

        // Design algorithm here to check wether you won the lottory or not.
        // for now, matching mega numbers means won lotto.
        if (user_input_mega == mega)
        {
            cout << "Congratulations! You won the lottery." << endl;
        }

        std::cout << "Generate again? Y or N: ";

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

    // Design algorithm here to check wether you won the lottory or not.
    // for now, matching mega numbers means won lotto.

    cout << "Finished... bye!" << endl;

    return 0;

} // end main
