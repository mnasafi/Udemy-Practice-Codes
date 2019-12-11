// Section 6 - 63: Practice Exercise 3
// Write a program to offer discounts on total bill ammount
// if bill amount < 100, no discount
// if bill amount >= 100 and < 500, then 10% discount
// if bill amount >= 500, then 20% discount

#include <iostream>

using namespace std;

int main()
{
    // initiliaze variables
    float bill_amount;
    float discount = 0.0;
    float discount_amount = 0.0;

    cout << "Enter Total Bill Amount $: ";

    cin >> bill_amount;

    // bill amount < 100, no discount
    if (bill_amount < 100)
    {
        discount = 0.0; // no discounts given
        discount_amount = bill_amount;
    }

    // 10% discount
    else if (bill_amount >= 100 && bill_amount < 500)
    {
        discount = bill_amount * 0.10;            // 10% discount offered
        discount_amount = bill_amount - discount; // discount_amount = bill_amount * 0.90;

    } // end if

    // bill amount > 500, 20% discount
    else if (bill_amount > 500)
    {
        discount = bill_amount * 0.20;        // 20% discount offered
        discount_amount = bill_amount * 0.80; // discount_amount = bill_amount - discount;
    }

    // print results
    cout << "The total bill amount was: $" << bill_amount << endl;
    cout << "The discount amount is: $" << discount << endl;
    cout << "The adjusted amount after discount is: $" << discount_amount << endl;

    return 0;

} // end main