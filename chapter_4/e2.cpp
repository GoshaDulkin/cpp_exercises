#include<iostream>

using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
    if (c < -273.15) {
        throw runtime_error("Temp below absolute zero\n");
    }
    return c + 273.15;
}

int main()
{
    double c = 0; // declare input variable
    try {
        cin >> c; // retrieve temperature to input variable
        double k = ctok(c); // convert temperature
        cout << k << "\n" ; // print out temperature
    }
    catch (runtime_error& e) {
        cerr << "Error: " << e.what() << "\n";
    }
}
