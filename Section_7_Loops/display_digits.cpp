<<<<<<< HEAD
// Section 7 - 76: Practice Problem Display Digiits
=======
// Section 7 - 76. Practice Problem: Display Number in reverse individually
>>>>>>> 33268bdb35a2f9c8d0bc3b86181025a19fc7d621

#include <iostream>

using namespace std;

int main()
<<<<<<< HEAD
{
    int n, r = 0;

    cout << "Enter N: ";

    cin >> n;
    /*
=======

{
    long long n, r, sum = 0;

    cout << "Enter N: ";
    cin >> n;

>>>>>>> 33268bdb35a2f9c8d0bc3b86181025a19fc7d621
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;

<<<<<<< HEAD
        cout << r;
    }
*/
    // alternative using for loop
    for (n > 0; n--;)
    {
        // r = n % 10;
        n = n / 10;

        cout << n << " " ;
    }

=======
        sum = sum + r;

        cout << r << " + ";

    } // end while

    cout << " => :: Sum Total :: " << sum;
>>>>>>> 33268bdb35a2f9c8d0bc3b86181025a19fc7d621
    cout << endl;

    return 0;

} // end main