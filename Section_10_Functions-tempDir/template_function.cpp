// Section 10 - Function Template demo

// Usage: Can use generic function templates to work regardless of data type

#include <iostream>
using namespace std;

// Declare Template
// dont use max() function, it is already included in c++ library!
template <class T>
T GetMax(T x, T y)
{
    return x > y ? x : y; // if x > y, return x otherwise return y.

} // end template

int main()
{
    // when function called, template substitutes return data type.
    int c = GetMax(10, 35);
    float d = GetMax(15.93f, 10.35f);

    // display results

    cout << "Integer max: " << c << endl;
    cout << "Float max: " << d << endl;

    return 0;
} // end main