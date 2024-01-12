#include "./std_lib_facilities.h"

int main() {
    int lower = 1;
    int upper = 100;
    int guesses = 0;

    cout << "Think of a number between " << lower << " and " << upper << '\n';

    int number_found = -1;
    while (number_found == -1) {
        int half = lower+(upper-lower)/2;
        char answer = ' ';

        cout << "Is you number lower than " << half << "?\n";
        cin >> answer;

        if (answer == 'y') {
            upper = --half;
        } else if (answer == 'n') {
            lower = half;
        } else {
            cout << "Please answer with y for yes and n for no\n";
        }

        if (upper - lower == 0) number_found = upper;

        while (upper - lower == 1) {
            cout << "Is your number " << upper << "?\n";
            cin >> answer;
            if (answer == 'y') {
                number_found = upper;
                break;
            } else if (answer == 'n') {
                number_found = lower;
                break;
            } else {
                cout << "Please answer with y for yes and n for no\n";
            } 
        }

        //cout << "half " << half << '\n';
        //cout << "upper " << upper << '\n';
        //cout << "lower " << lower << '\n';
        ++guesses;
    }

    cout << "Your number was " << number_found << "!\n";
    cout << "It took me " << guesses << " guesses!\n";

    return 0;
}