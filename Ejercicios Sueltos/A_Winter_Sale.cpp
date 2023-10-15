#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int X;
    double P;
    
    // Read the input values
    cin >> X >> P;

    // Calculate the original price before the discount
    double originalPrice = P / (1.0 - (X / 100.0));

    // Round up to two decimal places
    originalPrice = ceil(originalPrice * 100) / 100;

    // Print the result with two decimal places
    cout << fixed << setprecision(2) << originalPrice << endl;

    return 0;
}
