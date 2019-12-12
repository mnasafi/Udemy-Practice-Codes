// Section 7 - 76. Practice Problem: Display Number in reverse individually

#include <iostream>

using namespace std;

int main()

{
    long long n, r, sum = 0;

    cout << "Enter N: ";
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;

        sum = sum + r;

        cout << r << " + ";

    } // end while

    cout << " => :: Sum Total :: " << sum;
    cout << endl;

    return 0;

} // end main