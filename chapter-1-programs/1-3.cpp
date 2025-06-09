#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels, cents;
    double dollars; //Need this for decimals.

    cout<<"Press Enter after entering each number. \n";
    cout<<"How many quarters do you have?\n";
    cin>>quarters;

    cout<<"How many dimes do you have?\n";
    cin>>dimes;

    cout<<"How many nickels do you have?\n";
    cin>>nickels;

    cents = (quarters * 25) + (dimes * 10) + (nickels * 5);
    dollars = cents / 100.0; // Ensures result is a decimal

    cout << quarters << " quarters, " << dimes << " dimes, and " << nickels << " nickels\n";
    cout << "equals " << cents << " cent(s), or " << dollars << " dollar(s).\n";

    return 0;
}