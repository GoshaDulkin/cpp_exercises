#include <iostream>
#include <cmath>
using namespace std;

int main() // simple program to exercise operators
{
    cout << "Please enter an integer value: ";
    int n = 0;
    cin >> n;
    cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nthree times n == " << 3*n
    << "\ntwice n == " << n+n
    << "\nn squared == " << n*n
    << "\nhalf of n == " << n/2
    << "\nsquare root of n == " << sqrt(n)
    << "\nmodulo 2 of n == " << n%2
    << '\n';
}
