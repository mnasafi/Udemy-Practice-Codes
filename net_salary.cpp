// Program that calculates the Net Salary from user's input

#include <iostream>

using namespace std;

int main()

{
    // initialize local variables here
    float basic_salary = 0;
    float allowance_percentage, deduction_percentage = 0.0;
    float net_salary = 0;

    cout << "Program to calculate Net Salary" << endl;

    // Prompt user for enteries
    cout << "Enter Basic Salary: ";
    cin >> basic_salary;

    cout << "Enter Percentage of Allowances: ";
    cin >> allowance_percentage;

    cout << "Enter Percentage of Deductions: ";
    cin >> deduction_percentage;

    cout << "Deduction: " << deduction_percentage << endl;

    cout << "Allowance: " << allowance_percentage << endl;

    // Perform Net Salary formula
    // Net Salary = Basic Salary + Basic Salary * Percentage Allowance
    // - Basic Salary * Percentage Deductions

    // divide allowance_percentage with 100 to convert to percent
    net_salary = basic_salary + (basic_salary * allowance_percentage / 100) -
                 (basic_salary * deduction_percentage / 100);

    cout << "Calculated Net Salary is: " << net_salary << endl;


    int a = 11, b = 9;

    cout << "a | b = " << ( a | b ) << endl;

    int g = 25;

    cout << (~g) << endl;

    

} // end main