#include <iostream>
using namespace std;

int main() {
    const double MOUSE_MASS_GRAMS = 350.0, 
    MOUSE_LETHAL_DOSE_GRAMS = 5.0,
    SWEETNER_ONE_POP = 0.35,
    GRAMS_PER_POUND = 454.0;

    double human_mass_pounds, human_mass_grams, human_lethal_dose_grams, max_pop_bottles;

    char ans;

    cout << "Let's determine how much diet pop you can drink without dying!\n";
    do {
        cout << "Type your target weight in pounds (just the number) and press enter\n";
        cin >> human_mass_pounds;

        // Convert human pounds to grams:
        human_mass_grams = GRAMS_PER_POUND * human_mass_pounds;

        // Get the lethal dose at that weight:
        human_lethal_dose_grams = (MOUSE_LETHAL_DOSE_GRAMS / MOUSE_MASS_GRAMS) * human_mass_grams;

        // Calculates how many bottles of pop would add up this lethal dose:
        max_pop_bottles = human_lethal_dose_grams / SWEETNER_ONE_POP;

        cout << "Based on your current weight loss goal of " << human_mass_pounds << " lbs ( "
            << human_mass_grams << " grams),\n" 
            << "you could consume a max of " << max_pop_bottles << " bottle(s) of pop before you would die.\n"
            << endl;

        cout << "Would you like to calculate for a different weight?\n"
        << "Type y for yes, or n for no and press enter\n";
        cin >> ans;
    }
    while ( (ans == 'Y') || (ans == 'y'));

    return 0;
}
