// section 7, multiplication demo
//

#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "Enter N: " ;

	cin >> n;

	if ( n > 0 || n < 0 )
	{

		for (int i=1; i <= 10; i++)
		{
			cout << n << " x " << i << " = " << i * n << endl;


		} // end for

	} // end if

	else
	{
		cout << "Entering 0 only gets you: " << n << endl;

	}

	return 0;


} // end main

