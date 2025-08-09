#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


double cm_to_m(double cm) {
    double m = cm / 100;
    return m;
}


void update_smallest_largest(double d, double& smallest, double& largest) {
    if (d > largest) {
        largest = d;
    } else if (d < smallest) {
        smallest = d;
    }

}


bool valid_unit(string unit) {
    if (unit == "m" || unit == "cm") {
        return true;
    }
    cout << "Invalid unit: " << unit << "\n";
    return false;
}


int main() {
    double d = 0;
    string unit = "";
    double smallest = 0;
    double largest = 0;
    double total = 0;
    vector<double> values;

    cout << "Enter a number\n";

    while (true)
    {
        cin >> d >> unit;
        if (!valid_unit(unit)) { continue; }
        if (unit == "cm") {
            d = cm_to_m(d);
        }
        update_smallest_largest(d, smallest, largest);
        total += d;
        values.push_back(d);
        cout << "smallest so far: " << smallest << "\n";
        cout << "largest so far: " << largest << "\n";
        cout << "total: " << total << "\n";
        sort(values.begin(), values.end());
        for (double d : values) {
            cout << d << ",";
        }
        cout << "\n";
    }

    return 0;
}
