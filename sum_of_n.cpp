#include <iostream>

using namespace std;

// declare function
int SumOfN(int n)
{
	int sum;
	sum = n * (n + 1) / 2;

	return sum;

} // end sumOfN

int main()
{
	int n;

	do
	{
		cout << "Enter N to calculate sum of n: ";

		cin >> n;

		if (n <= 0)
		{
			cout << "Enter a positive, non-zero digit to sum up!" << endl;

		} // end if

		else
		{

			cout << "Sum of 1 to " << n << " is: " << SumOfN(n) << endl;

		} // end else

	} // end do

	while (n <= 0);

	return 0;

} // end main
