#include "./std_lib_facilities.h"

int main() {
    int squares = 64; //number of squares in a chess board

    int grains_sum_int = 0;
    int grains_per_square_int = 0;

    double grains_sum_double = 0;
    double grains_per_square_double = 0;
    for (int i = 0; i < squares; ++i) {
        if (i == 0) {
            grains_sum_int = 1;
            grains_per_square_int = 1;

            grains_sum_double = 1;
            grains_per_square_double = 1;
        } else {
            grains_per_square_int *= 2;
            grains_sum_int += grains_per_square_int;

            grains_per_square_double *= 2.0;
            grains_sum_double += grains_per_square_double;
        }
        
        cout << "square: " << i+1 << '\n';
        cout << "int\tgrains sum: " << grains_sum_int << "\t\tgrains per square: " << grains_per_square_int << '\n';
        cout << "double\tgrains sum: " << grains_sum_double << "\t\tgrains per square: " << grains_per_square_double << '\n';
    }

    return 0;
}