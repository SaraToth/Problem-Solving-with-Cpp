#include <iostream>
using namespace std;

int main() {
        double time, distance;

    cout << "Let's see how far an object would be in free fall for a certain length of time\n";
    cout << "Enter a time, in seconds, and then press enter:\n";
    cin >> time;
    distance = (32 * time * time) / 2;
    cout << "If an object was in free fall for " << time << " seconds, then it would travel a distance of " << distance << " feet.\n";

    return 0;
}
