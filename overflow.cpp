#include <iostream>

using namespace std;

int main()

{
    char x = 65;

    cout << "X is: " << (int)x << endl;

    x = x + 'a';

    cout << "X is now: " << (int)x << endl;

    // udemy example below

    int y = INT64_MAX;

    y++;

    cout << "integer y is: " << (int) y << endl;

} // end main