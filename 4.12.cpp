#include "./std_lib_facilities.h"

bool is_prime(int value) {
    int max = sqrt(value);
    if (value == 1) return false;
    if (value == 2 || value == 3) return true;
    for (int min = 2; min <= max; ++min) {
        if (value % min == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "What is the max number to find for primes?\n";
    int max;
    cin >> max;
    vector<int> sequence;
    for (int i = 1; i < max; ++i) {
        sequence.push_back(i+1);
    }

    for (int num : sequence) {
        if (is_prime(num)) cout << num << '\n';
    }

    return 0;
}