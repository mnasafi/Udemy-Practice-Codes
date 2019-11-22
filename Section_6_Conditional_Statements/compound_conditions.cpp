// Section 6, lecture 47 - Program using Compound Conditions

#include <iostream>

using namespace std;

int main()
{
    // initialize variables
    int age = 0;

    cout << "Enter age: ";
    cin >> age;

    if (age >= 18 && age <= 70)
    {
        cout << age << " is a young age ;)" << endl;
    }

    else
    {
        cout << age << " is NOT a young age :(" << endl;
    }

    return 0;

} // end main