// Section 9.103: Demo - Pointers

#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    // declare and initialize a pointer
    int *p = &a;

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl; // returns the memory address. 
    cout << "p: " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl; // dereferencing a pointer - access the data stored at the mem. address pointer points.

    return 0;

} // end main
