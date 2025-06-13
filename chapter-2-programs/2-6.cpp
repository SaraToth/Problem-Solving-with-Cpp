#include <iostream>
using namespace std;

int main() {

    const double HOURLY_RATE = 16.78, OVERTIME_RATE = HOURLY_RATE * 1.5;

    double hours_worked, overtime_hours, gross_pay;
    int dependents;

    cout << "How many hours did you work this week? ";
    cin >> hours_worked;
    cout << "\n How many dependents do you have? ";
    cin >> dependents;

    if (hours_worked > 40) {
        overtime_hours = hours_worked - 40;
        gross_pay = (40 * HOURLY_RATE) + (overtime_hours * OVERTIME_RATE);
    } else {
        gross_pay = hours_worked * HOURLY_RATE;
    }

    const double UNION_DUES = 10.00;
    double ssn, fed_income_tax, state_income_tax, health_insurance = 0, net_pay;

    ssn = gross_pay * 0.06;
    fed_income_tax = gross_pay * 0.14;
    state_income_tax = gross_pay * 0.05;

    if (dependents > 2) {
        health_insurance = 35.00;
    }

    net_pay = gross_pay - ssn - fed_income_tax - state_income_tax - health_insurance - UNION_DUES;

    cout << "Your gross pay for the week is $" << gross_pay <<endl
    << "Your total deductions are as follows:\n"
    << "Social Security: $" << ssn << endl
    << "Federal Income Tax: $" << fed_income_tax << endl
    << "State Income Tax: $" << state_income_tax << endl;

    if (health_insurance > 0) cout << "Health Insurance: $" << health_insurance << endl;

    cout << "Your net pay for the week is $" << net_pay << endl;

    return 0;
}