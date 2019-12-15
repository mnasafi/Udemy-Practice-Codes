// Section 8.90: Array Demo

#include <iostream>

#include <bits/stdc++.h> // INT_MAX and INT_MIN

using namespace std;

int main()
{
    int A[10] = {2, 4, 6, 8, 10, 12, 15, 32, 5, 7};

    /* Minimum value a `signed int' can hold.
     Comes from <bits/stdc++.h> library */
    int max = INT_MIN;
    int min = INT_MAX;

    for (auto x : A)
    {
        if (x > max)
        {
            max = x;
        }

        if (x < min)
        {
            min = x;
        }

    } // end for

    // print result
    cout << "The max is: " << max << endl;
    cout << "The min is: " << min << endl;

    return 0;

} // end main