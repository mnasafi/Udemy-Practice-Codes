#include <iostream>

// using namespace std;

using std::cin;
using std::cout;
using std::endl;

int main()
{
	std::string name;

	cout << "Nigga, enter your full name: ";

	getline(cin, name);

	cout << "Your name is: " << name << endl;

	return 0;

} // end main
