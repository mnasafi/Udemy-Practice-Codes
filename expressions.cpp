#include <iostream>

#include <math.h>

using namespace std;

int main()

{
    int a, b, c;

    double root1, root2;

    cout << "Enter 3 values: ";

    cin >> a >> b >> c;

    root1 = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);

    root2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

    cout << "Root1: " << root1 << ";  Root2: " << root2 << endl;

    return 0;

} // end main