#include<iostream>
#include<vector>
#include<string>

using namespace std;

int getSum(int num_vals, vector<int>& vals) {
    if (num_vals > vals.size()) {
        throw runtime_error("Num of vals to sum greater then number of input vals\n");
    }
    int sum = 0;
    for (int i = 0; i < num_vals; ++i) {
        sum += vals[i];
    }
    return sum;
}


int main() {
    int num_vals = 0;
    int sum = 0;
    vector<int> vals;
    string input;

    cout << "Enter num. of values you want to sum\n";
    cin >> num_vals;

    cout << "Enter values \n";
    while(true) {
        cin >> input;
        if (input == "|") {
            break;
        }
        try {
            int num = stoi(input);
            vals.push_back(num);
        }
        catch (const invalid_argument&) {
            cout << "Values should be int\n";
        }
    }
    try {
        sum = getSum(num_vals, vals);
    }
    catch (const runtime_error& e) {
        cerr << e.what();
        return -1;
    }
    cout << "The sum is: " << sum << "\n";
}
