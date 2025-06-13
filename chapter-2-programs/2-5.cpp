#include <iostream>
using namespace std;

int main() {
    int max_capacity, people_attending, remaining_people;

    cout << "What is the maximum capacity of the room the meeting will be held in?  ";
    cin >> max_capacity;
    cout << endl << "How many people will be attending? ";
    cin >> people_attending;
    cout << endl;

    if (people_attending < max_capacity) {
        remaining_people = max_capacity - people_attending;
        cout << "The meeting may proceed. There are " << remaining_people << " seats available.";
    };

    if (people_attending > max_capacity) {
        remaining_people = people_attending - max_capacity;
        cout << "The meeting cannot be held as it is in violation of fire regulations.\n"
            << "You must excuse " << remaining_people << " people from the meeting to proceed.\n";
    };

    return 0;
}

// Prompt user to provide max room capacity
// Prompt user to provide people attending

// If people attending < max capacity:
    // Announce the meeting is legal and how many more participants can join
// If the people attending > max capacity
    // Announce the meeting breaks the laws and how many need to be excluded
