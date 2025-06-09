#include <iostream>
using namespace std;

int main() {
    int sum, product, first_num, second_num;

    cout<<"Press enter after entering each number. \n";
    cout<<"Enter a number: \n";
    cin>>first_num;
    cout<<"Enter a second number: \n";
    cin>>second_num;

    sum = first_num + second_num;
    product = first_num * second_num;

    cout<<"The sum of these numbers is " << sum << "\n";
    cout<<"The product of these numbers is " << product << "\n";

    return 0;
}