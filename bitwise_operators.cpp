// Demo practice for Bitwise Operators
// Section 5, lecture 35: Bitwise Operators

#include <iostream>

using namespace std;

int main()
{

	int x = 11, y = 7, z, v;

	z = x & y;

	cout << "z = x & y is: " << z << endl;

	z = x | y;

	cout << "z = x | y is: " << z << endl;

	v = x ^ y;

	cout << "v = x ^ y is: " << v << endl;

	cout << "V is: " << v << endl;

	y = x << 1;

	cout << (int)y << endl;

	y = x >> 2;

	cout << (int)y << endl;

	y = ~x;

	cout << (int)y << endl;

	return 0;

} // end main
