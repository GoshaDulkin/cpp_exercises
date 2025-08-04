#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    cout << "Input 3 space-separated integers\n";
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;
    int max_num = max({a, b, c});
    cout << "The max int is: " << max_num << "\n"; 

    cout << "Input 3 space-separated strings\n";
    string str_a;
    string str_b;
    string str_c;
    cin >> str_a >> str_b >> str_c;
    string max_string = max({str_a, str_b, str_c});
    cout << "The max string is: " << max_string << "\n"; 
    return 0;
}
