// Section 9.111: Pointer Arithmatic
// Coding Exercise 42: Pointer Arithmathic

// NOTES: Division and Multiplication operations are not allowed in pointer operations.

#include <iostream>
using namespace std;

int main()
{

    int A[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    int *p = A;

    // move pointer to next location to print 4
    p++;

    cout << *p << endl; // prints the data the pointer points to.

    p = p + 3; // pointer will be pointing on 10

    cout << *p << endl;

    // print 2 without changing pointer location. Currently points to 10.
    cout << p[-4] << endl;


    // moving pointer beyond the array list. 
    // Points to random garbage data on every execution, not compile time.
    // Pointers work with heap memory.
    p = p + 7;

    cout << *p << endl;

    return 0;

} // end main