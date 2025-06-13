
// face value = 1,000
// interest rate = 15 percent
// length = 18 months



// Calculate interest/month: 1000 * 0.15
// 18 months / 12 in a year = 1.5
// Calculate 1.5 * interest -> total interest owed

// Face Value (1,000) - Total Interest Owed = person gets 775$

#include <iostream>
using namespace std;

int main() {

    double face_value, money_needed, total_interest, interest_decimal_rate, annual_interest, monthly_payment, interest_percent_rate, loan_years;
    int loan_months;
    char ans;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Let's determine how much you need to borrow in order to get the money you need\n";

    do {
        cout << "How much total money do you need from your loan after interest? $:";
        cin >> money_needed;
        cout << endl << "How much is the interest rate of the loan in percentage? ";
        cin >> interest_percent_rate;
        cout << endl << "How long would the period of the loan be for in months? ";
        cin >> loan_months;
        cout << endl;

        loan_years = loan_months / 12.0;
        interest_decimal_rate = interest_percent_rate / 100.0;
        

        face_value = money_needed / (1 - (interest_decimal_rate * loan_years));
        total_interest = face_value - money_needed;
        monthly_payment = face_value / loan_months;
        
        cout << "Based on the information provided:\n"
            << "Money needed: $" << money_needed << endl
            << "Loan interest rate: " << interest_percent_rate << "%" << endl
            << "Loan period: " << loan_months << " months" << endl
            << "Your loan's face value will need to be $" << face_value << endl
            << "For the entire lifetime of your loan you will have paid $" << total_interest << " in total interest" << endl
            << "And, your monthly payments will be $" << monthly_payment << endl;
  
        cout << endl << "Would you like to change the details of the loan and recalculate?\n"
            << "Type y for yes or n for no\n";
        cin >> ans;

    } while ((ans == 'Y') || (ans == 'y'));

    return 0;

}



// User inputs the amount they need to receive: money_needed
// User inputs the loan interest rate: interest_rate
// User inputs the duration of the loan (months): loan_period

// Convert the interest rate to a decimal (divide by 100)
// Convert the loan period to a decimal (divide by 12)

// Reverse calculate the total_interst that results in money_needed
    // total_interest = (money_needed * interest_rate * loan_period) / (1 - (interest_rate * loan_period))
// Calculate the Face_value of the loan = total_interest + money_needed

// Calculate the monthly payment

// Prompt the user to calculate again if they want