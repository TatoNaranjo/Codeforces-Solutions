/*
Calculo de Exponentes enormes por medio de Fast Powers
By: TatoNaranjo
*/

#include <iostream>

long long fast_power(long long base, long long exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base);
        }
        exponent = exponent / 2;
        base = (base * base);
    }
    return result;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int b;
        std::cin >> b;
        std::cout << fast_power(245, b) << std::endl;
    }
    return 0;
}
