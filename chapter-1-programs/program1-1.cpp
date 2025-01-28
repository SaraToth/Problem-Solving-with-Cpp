#include <iostream>
using namespace std;

int main() {
    int sum, product, first_num, second_num;

    cout<<"Press enter after entering a number. \n";
    cout<<"Enter a number: \n";
    cin>>first_num;
    cout<<"Enter a second number: \n";
    cin>>second_num;

    sum = first_num + second_num;
    product = first_num * second_num;

    cout<<"The sum of these numbers is ";
    cout<<sum;
    cout<<"\n The product of these numbers is ";
    cout<<product;
    cout<<"\n";



    return 0;
}