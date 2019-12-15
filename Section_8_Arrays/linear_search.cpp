// Section 8.88: Linear Search

#include <iostream>

using namespace std;

int main()
{
    int counter = 0; // stores number of searches to find key
    int a[5], n, key;
    n = 5; // array size


    cout << "Enter " << n << " Numbers: ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    } // end for

    cout << "Enter Key: ";
    cin >> key;

    // search for the key entered
    for (int i = 0; i < n; i++)
    {
        counter++; // stores number of searches taken to find the key element

        if (key == a[i])
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

    // do not insert "return 0;" here. Already entered above in 'for loop'.

} // end main