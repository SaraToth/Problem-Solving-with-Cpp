#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels;
    double sum; //Need this for decimals.

    cout<<"Press Enter after entering each number. \n";
    cout<<"How many quarters? \n";
    cin>>quarters;

    cout<<"How many dimes? \n";
    cin>>dimes;

    cout<<"How many nickels? \n";
    cin>>nickels;

    sum = (quarters * 0.25) + (dimes * 0.10) + (nickels * 0.05);

    cout<<"The total value of these coins is ";
    cout<<sum;
    cout<<" cents. \n";

    return 0;
}