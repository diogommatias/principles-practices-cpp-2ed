#include "./std_lib_facilities.h"

int main() {
    cout << "How many grains of rice do you want to give to the inventor?\n";
    int grains_give;
    cin >> grains_give;

    int square = 1;
    int grains_per_square = 0;
    int grains_sum = 0;
    while (grains_sum < grains_give) {
        if (square == 1) {
            grains_per_square = 1;
            grains_sum += 1;
        } else {
            grains_per_square *= 2;
            grains_sum += grains_per_square;
        }

        cout << "square: " << square << "\tgrains sum: " << grains_sum << "\t\tgrains per square: " << grains_per_square << '\n';

        ++square;
    }

    return 0;
}