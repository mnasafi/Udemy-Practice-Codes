// Section 6 - 52. Practice Code: Calculate Discounted Bill Ammount

#include <iostream>

using namespace std;

void Discount(float amount)
{

    float discount_amount = 0.0;

    // write nested conditions to print discounted bill ammount
    // if amount >= 5000, offer 20% discount
    // if 2000 <= amount < 5000, offer 10% discount
    // if amount < 2000, offer 5% discount

    // offer 20% discount
    if (amount >= 5000)
    {
        discount_amount = amount * 0.80;

    } // end if

    // offer 10% discount
    else if (amount >= 2000 && amount < 5000)
    {
        discount_amount = amount * 0.90;

    } // end else-if

    // Amount < 2000, offer 5% discount
    else
    {
        discount_amount = amount * 0.95;

    } // end else

    // output: Print discount bill amount after calculting the discount

    cout << "The discounted bill amount is: " << discount_amount << endl;

} // end Discount

// main program

int main()
{
    float input_amount = 0.0;

    cout << "Enter amount to calculate discount: ";

    cin >> input_amount;

    Discount(input_amount);

    return 0;
} // end main