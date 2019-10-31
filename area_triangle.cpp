#include <iostream>

using namespace std;

int main()

{
    // initialize variables
    float a, b, h = 0;

    cout << "Enter base and height: ";

    cin >> b >> h;

    a = (b * h) / 2;

    cout << "Area of triangle is: " << a << endl;

    float area();
    {
        int b = 7, h = 5;

        float area;

        // typecast from int to float datatype -- convert int to float
        area = (float)(b * h) / 2;

        cout << "The area is: " << area << endl;

    } // end area()

    return 0;

} // end main()

// alternative method
