#include <iostream>
using namespace std;
// Pay increase  is a constant?
int main() {

    double former_annual_salary, money_owed, new_annual_salary, new_monthly_salary;
    int number_months;
    char ans;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    do {
        cout << "Please type your annual salary without using commas $";
        cin >> former_annual_salary;
        cout << "Now, how many months retroactively will this pay increase be for?\n";
        cin >> number_months;

        const double ANNUAL_PAY_INCREASE = 0.0076 * former_annual_salary;

        money_owed = (ANNUAL_PAY_INCREASE / 12) * number_months;
        new_annual_salary = former_annual_salary + ANNUAL_PAY_INCREASE;
        new_monthly_salary = new_annual_salary / 12;
        cout << endl << endl
            << "Based on your former annual salary of $" << former_annual_salary << " :\n"
            << "You are retroactively owed $" << money_owed << " for the previous "<< number_months << " months.\n"
            << "Your new annual salary is $" << new_annual_salary << ".\n"
            << "Your new monthly salary is $" << new_monthly_salary << ".\n"
            << "Would you like to recalculate?\n"
            << "Press y for yes or n for no\n";
        cin >> ans;
    } while ( (ans == 'Y') || (ans == 'y'));

    

    return 0;
}
