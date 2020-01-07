// Section 9.110: Dynamic Memory Allocation Demo using Heap Mem.

#include <iostream>

using namespace std;

int main()
{

    // declare pointer
    // this is stored in stack memory, not heap.
    int *p = new int[20];

    // deallocate heap mem. - free memory
    delete[] p;

    // resize the array by creating a new array in heap mem.
    p = new int[35];

    return 0;

} // end main