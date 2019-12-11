// Section 7 - Problem 74. Check if given input number is prime or not

#include <iostream>

using namespace std;

int main()
{
    // initialize variables
    int n, count = 0;

    cout << "Enter N: ";

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++; // increment count, if count == 2 then it is prime number
        }

    } // end for

    if (count == 2)
    {
        cout << n << " is a prime number :)" << endl;
    }

    else
    {
        cout << n << " is not a prime number!" << endl;
    }

} // end main