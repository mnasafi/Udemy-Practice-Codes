// Program to Demonstrate Pointer Arithmatic

#include <iostream>

using namespace std;

int main()
{
    int A[7] = {2, 3, 7, 11, 13, 17, 19}; // first 7 prime numbers
    int *p = A;                           // Declare pointer to array A
    int *q = &A[4];                       // Initialize pointer Q to address of array A at index 4.

    cout << *p << endl;
    cout << endl;

    p++; // move to next pointer location - NOT increment
    cout << *p << endl;
    cout << endl;

    p--; // move backwards to previous pointer location - NOT decrement!
    cout << *p << endl;
    cout << endl;

    cout << p << endl;
    cout << p + 2 << endl;
    cout << endl;

    cout << *p << endl;
    cout << *(p + 2) << endl;
    cout << endl;

    cout << q - p << endl;
    cout << p - q << endl;

    cout << *(p + 1) << endl;
    cout << endl;

    cout << &A[0] << endl;
    cout << p << endl;
    cout << &p << endl;

    
    return 0;

} // end main