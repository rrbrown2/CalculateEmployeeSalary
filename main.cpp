
// This program calculates an employee�s gross salary, taxes paid, and net pay. The then displays employee salary information on the screen

#include <iostream>
#include <iomanip>
using namespace std;

// Constants are defined here!
const double PAYROLL_TAX = 0.15;
const double LESS_THAN_THREE = 0.05;
const double MORE_THAN_THREE = 0.025;
const double OVERTIME = 40;
const double MAX_EARNINGS = 1000;

int main()
{
    double hour_worked, rate_pay, dependents, net_pay, taxes=0, taxes2, earnings, total_taxes;

    // Get user inputs

    cout << "Enter hours worked: ";
    cin >> hour_worked;

    cout << "Enter rate of pay: ";
    cin >> rate_pay;

    cout << "Enter number of dependents: ";
    cin >> dependents;


    // Calculate earnings which is the total amount of $ employee makes
    earnings = hour_worked * rate_pay;

    // Calculate overtime
     if(hour_worked > OVERTIME)
        earnings = (OVERTIME * rate_pay) + (hour_worked - OVERTIME) * rate_pay * 1.5;

    else
        earnings = hour_worked * rate_pay;

    /*
        Taxes based on amount of dependents
        5% tax if dependents is less than 3
        2.5% tax if dependents is greater than 2
    */

    if((dependents < 3) && (earnings > MAX_EARNINGS))
        taxes = earnings * LESS_THAN_THREE;

    else (dependents >=3) && (earnings > MAX_EARNINGS);

    taxes = earnings * MORE_THAN_THREE;


    // Calculate total taxes based on earnings
    if(earnings >= MAX_EARNINGS)
       {
        taxes2 = earnings * PAYROLL_TAX;

        total_taxes = taxes + taxes2;
        }

    // Calculate net pay which is money employee receives after taxes are deducted
    net_pay = earnings - total_taxes;


    cout << "            Payroll report             \n";
    cout << "--------------------------------------\n";
    cout << setprecision(2)<< fixed << showpoint;
    cout << "Gross salary $" << earnings << endl;
    cout << "Taxes payed  $" << total_taxes << endl;
    cout << "Net Pay      $" << net_pay <<  endl;


return 0;
}

