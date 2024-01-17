#include "./std_lib_facilities.h"

//Finds all primes within a range of 2 and a given max number.
//Receives max number as an int.
//Returns a sequence of char.
//The index of the sequence represents the prime number. 
//If sequence[index] is 0, then index is not prime. If sequence[index] is 1, then index is prime.
vector<char> find_primes(int max) {
    vector<char> sequence;
    for (int i = 0; i <= max; ++i) {
        sequence.push_back('1');
    }

    double max_range = sqrt(max);
    for (int i = 2; i <= max_range; ++i) {
        if (sequence[i] == '1') {
            for (int j = i*i; j < sequence.size(); j += i) {
                if (sequence[j] == '1') {
                    sequence[j] = '0';
                }
            }
        }
    }

    return sequence;
}

int main() {
    cout << "What is the max number to find for primes?\n";
    int max;
    cin >> max;
    
    vector<char> primes = find_primes(max);
    for (int i = 2; i < primes.size(); ++i) {
        if (primes[i] == '1') cout << i << '\n';
    }

    return 0;
}