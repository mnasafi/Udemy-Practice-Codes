// Program to demonstrate Short Circuit

#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 5, i = 5;

    cout << "i is: " << i << endl;

    if (a > b && ++i >= b)
    {
        cout << "First statement is TRUE" << endl;
    }

    cout << "i is: " << i << endl;

    if (a < b || ++i <= b)
    {
        cout << "Second statement is TRUE" << endl;
    }

    cout << "i is: " << i << endl;

    return 0;
} // end main