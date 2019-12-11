// sum of natural numbers from Zero to Nth input number

#include <iostream>

using namespace std;

int main()
{
	unsigned long long sum = 0; // variable to keep total sum
	unsigned long long n;		// vairable for storing user input

	cout << "This program sums natural numbers from Zero to nth input number" << endl;
	cout << "Enter N: ";

	cin >> n;

	for (int i = 1; i <= n; i++)
	{

		cout << i << ": " << sum << " + " << i << " = " << sum + i << endl;

		sum += i; // sum = sum + i;

	} // end for

	cout << "Total sum from 0 + 1 + 2 + ... + " << n << " is: " << sum << endl;

	return 0;

} // end main
