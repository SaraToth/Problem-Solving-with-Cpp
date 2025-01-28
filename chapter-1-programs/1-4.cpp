#include <iostream>
using namespace std;

int main() {
    int time_in_seconds;
    double distance;

    cout<<"Enter a time in seconds, and then press enter: \n";
    cin>>time_in_seconds;

    distance = (32 * (time_in_seconds * time_in_seconds)) / 2;

    cout<<"The total distance travelled by an object for ";
    cout<<time_in_seconds;
    cout<<" seconds of freefall is ";
    cout<<distance;
    cout<<" feet.\n";

    return 0;
}

//25 seconds -> 10,000
//18 seconds -> 5,184
//2 -> 64