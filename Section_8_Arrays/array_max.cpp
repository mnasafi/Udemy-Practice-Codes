// Section 8 - Find the largest number in the array

#include <iostream>

#include <array>

using namespace std;

int main()
{
    // Declare and initiliaze array
    array<int, 7> my_array = {3, 2, 9, 11, -5, 9, 21};

    // intialize variables
    int max = my_array[0]; // assume first index is largest and start there.

    // iterate through array to find largest number
    for (int i = 0; i < my_array.size(); i++)
    {
        // check for largest number, store into max
        if (my_array[i] > max)
        {
            max = my_array[i];

        } // end if

    } // end for

    // display largest number
    cout << "The max number is: " << max << endl;

    return 0;

} // end main