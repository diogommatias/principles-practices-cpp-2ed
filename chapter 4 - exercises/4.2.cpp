#include "std_lib_facilities.h"

// calculate the median (mediana)
double median(vector<double> sequence) {
    sort(sequence);
    if (sequence.size()%2 == 1) {
        return sequence[sequence.size()/2];
    } else {
        double numerator = sequence[sequence.size()/2-1] + sequence[sequence.size()/2];
        return numerator/2;
    }
}

int main() {
    vector<double> temperatures;
    for (double temp; cin>>temp; ) {
        temperatures.push_back(temp);
    }

    cout << "Median: " << median(temperatures) << '\n';

    return 0;
}