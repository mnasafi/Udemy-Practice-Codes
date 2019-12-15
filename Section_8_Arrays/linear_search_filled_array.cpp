// Section 8.88: Linear Search

#include <iostream>
#include <array>

using namespace std;

int main()
{
    int counter = 0; // stores number of searches to find key
    int key;

    array<int, 10> prime_array = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    // prompt user for key
    cout << "Enter Key: ";
    cin >> key;

    // search for the key entered
    for (int i = 0; i < prime_array.size(); i++)
    {
        counter++; // stores number of searches taken to find the key element

        if (key == prime_array[i])
        {
            // line break
            cout << endl;

            cout << "Key Found :)" << endl;

            cout << "Number of searches: " << counter << endl;

            return 0; // terminate program here when key found
        }

    } // end for

    // line break
    cout << endl;

    // display key not found here outside the for loop.
    cout << "Key was not found :( " << endl;
    cout << "Number of searches: " << counter << endl;

    return 0;

} // end main