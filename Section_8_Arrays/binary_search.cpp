// Binar search implementation practice
// Section 8.89: Binary Search

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> binary_search_array = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}; // array holds first 10 prime numbers

    int low = 0, high = 9, key, mid;

    int counter = 0; // counter to keep track # searches to lookup key

    cout << "Enter key to search: ";
    cin >> key;

    while (low <= high)
    {
        counter++;

        mid = (low + high) / 2;

        if (key == binary_search_array[mid])
        {
            cout << "Found at: " << mid << endl;
            cout << "Number searches: " << counter << endl;

            return 0; // terminate prog. here once key found

        } // end if

        else if (key < binary_search_array[mid])
        {
            high = mid - 1;

        } // end else-if

        else
        {
            low = mid + 1; // key > binary_search_array[mid]
        }

    } // end while

    // key not found
    cout << "Key was not found :(" << endl;
    cout << "Number searches: " << counter << endl;

    return 0;

} // end main