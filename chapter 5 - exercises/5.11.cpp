#include "std_lib_facilities.h"

//Fibonacci sequence
//Finds all the values of the fibonacci sequence that can be stored inside an int
int main() {
    try {
        int max_range = 100;
        int previous = 1;
        int current = 1;
        cout << previous << ' ';
        for (int i = 0; i < max_range; ++i) {
            cout << current << ' ';
            int next = current + previous;
            double temp = double(current) + double(previous);
            if (temp != next) {
                error("Can't no longer store the value inside a int\n");
            }
            previous = current;
            current = next;
        }
        cout << '\n';

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