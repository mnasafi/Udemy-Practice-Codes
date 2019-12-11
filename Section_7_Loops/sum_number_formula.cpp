// sum of natural numbers from Zero to Nth input number
// using formula: ( N(N+1) ) / 2

#include <iostream>

using namespace std;

int main()
{
    unsigned long long sum = 0; // variable to keep total sum
    unsigned long long n;       // vairable for storing user input

    cout << "This program sums natural numbers from Zero to nth input number" << endl;
    cout << "Enter N: ";

    cin >> n;

    // formula to sum n natural numbers: ( n(n+1) ) / 2
    sum = (n * (n + 1)) / 2;

    cout << "Total sum from 0 + 1 + 2 + ... + " << n << " is: " << (n * (n + 1)) / 2 << endl;

    cout << "Total sum from 0 + 1 + 2 + ... + " << n << " is: " << sum << endl;

    return 0;

} // end main
