// Section 9.106: Pointer Dynamic Allocation

// Demo to show how arrays in Heap memory can be resized using pointer

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;

    int *p = new int[5];
    p[0] = 12;
    p[3] = 35;

    cout << "P[3]: " << p[3] << endl;

// 2 steps to deallocate heap memory.

    // delete heap memory - deallocate / free up memory

    // step 1 - first delete heap memory 
    // otherwise will not free heap memory after setting pointer to nullptr.
    delete[] p;

    // step 2 - remove the pointer reference
    p = nullptr; // to remove the pointer reference.

    // Resizing array in heap memory
    p = new int[40];

    // fill array with 1 ... 39

    for (int i = 1; i < 40; i++)
    {
        p[i] = i;
        sum = sum + i;

    } // end for

    // store array summation in last index
    p[40] = sum;

    cout << "p[40]: " << p[40] << endl;

    // line break
    cout << endl;

    // print the array
    int counter = 1;

    while (counter < 41)
    {
        cout << p[counter] << " ";

        counter++;

    } // end while

    cout << endl;

    return 0;

} // end main
