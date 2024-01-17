#include "std_lib_facilities.h"

double ctok(double c) {
    if (c < -273.15) {
        error("Given temperature can't be below -273,15C");
    }
    double k = c + 273.15;
    return k;
}

double ktoc(double k) {
    if (k < 0) {
        error("Given temperature can't be below 0K");
    }
    double c = k - 273.15;
    return c;
}

int main() {
    double value = 0;
    char unit;
    cin >> value >> unit;
    if (unit == 'C' || unit == 'c') {
        value = ctok(value);
        cout << value << "K\n";
    }
    else if (unit == 'K' || unit == 'k') {
        value = ktoc(value);
        cout << value << "C\n";
    }
    else {
        error("Wrong input. Need: {value} {unit}\n");
        return 1;
    }

    return 0;
}