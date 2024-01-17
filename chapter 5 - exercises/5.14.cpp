#include "std_lib_facilities.h"

// Bulls and Cows game
int main() {
    try {
        string solution = "1234";

        string guess = " ";
        bool solution_found = false;
        // ask the user for a guess until a solution is not found
        while (!solution_found && cin >> guess) {
            int bull = 0;
            int cow = 0;

            // check if the input is a number
            for (char c : guess) {
                if (!(c >= '0' && c <= '9')) error("Wrong input. Input must be a number");
            }

            // calculate the number of bulls and cows, if any
            for (int i = 0; i < solution.size(); ++i) {
                for (int j = 0; j < solution.size(); ++j) {
                    char guess_letter = guess[i];
                    char solution_digit = solution[j];
                    if (guess_letter == solution_digit && i == j) {
                        bull += 1;
                    } 
                    else if (guess_letter == solution_digit && i != j) {
                        cow += 1;
                    }
                }
            }

            // check if the solution is found
            if (bull == solution.size()) {
                cout << "You found the right sequence\n";
                solution_found = true;
            }
            else {
                cout << bull << " bull " << cow << " cow\n";
            }
        }

        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    }
    catch (...) {
        cerr << "Something went wrong!\n";
        return 2;
    }
}