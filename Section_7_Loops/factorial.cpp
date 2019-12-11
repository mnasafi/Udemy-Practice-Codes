#include <iostream>

using namespace std;

int main()
{
    long long n, i, fact = 1;

    cout << "Enter N: ";

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        fact *= i; // fact = fact * i;

    } // end for

    cout << n << "! = " << fact << endl;

    return 0;

} // end main

