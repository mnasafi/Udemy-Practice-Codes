// CPP Program to illustrate
// Initialization and implementation of Array and printing array content
// using size() function
//

#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 3> myArray{1, 2, 3};

	for (int i = 0; i < myArray.size(); i++)
	{
		cout << myArray[i] << " ";

	} // end for

	cout << endl;
	cout << endl;
	cout << endl;

	float A[6] = {5.3f, 9.35f, 8, 3, 2.7f};

	for (float x : A)
	{
		cout << x << endl;
	}

	cout << endl;
	cout << endl;

	// auto data type feature
	for (auto x : A)
	{
		cout << x << endl;
	}

	cout << endl;

	return 0;

} // end main
