// Section 7 - 76: Practice Problem Display Digiits

#include <iostream>

using namespace std;

int main()
{
    int n, r = 0;

    cout << "Enter N: ";

    cin >> n;
    /*
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;

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

    cout << endl;

    return 0;

} // end main