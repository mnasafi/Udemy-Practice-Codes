// Section 5 : 37. Enum and TypeDef
// Demo practice for Enum and Typedef

#include <iostream>

using namespace std;

// start monday with 1 instead starting with default zero
enum day
{
    mon = 1,
    tue,
    wed = 12,
    thu = 248,
    fri,
    sat,
    sun
};

typedef int marks;

typedef int rollno;

int main()

{
    day d = tue;

    cout << "D is: " << d << endl;

    cout << mon << endl;
    cout << tue << endl;
    cout << wed << endl;
    cout << "Thu: " << thu << endl;
    cout << "Friday + 1 is: " << fri + 1 << endl;
    cout << "Sat: " << sat << endl;
    cout << "Sun : " << sun << endl;

    // type def demo

    marks mark_1, m2;

    rollno r1, r2, r3;

    mark_1 = 50;
    m2 = 69;

    r1 = 23;
    r2 = 45;
    r3 = 18;

    cout << "Mark 2 is: " << m2 << endl;

    cout << "r1 is: " << r1 << endl;

    return 0;

} // end main
