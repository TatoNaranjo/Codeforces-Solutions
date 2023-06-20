#include <iostream>
#include <algorithm>
#include <numeric>
#include <regex>

int calculateAllDigitsProduct(const std::string& n) {
    int result = std::accumulate(n.begin(), n.end(), 1,
        [](int x, char y) { return x * (y - '0'); });
    return result;
}

int solve() {
    int n;
    std::cin >> n;

    if (n < 10) {
        return n;
    }

    if (std::regex_match(std::to_string(n), std::regex("^10+$"))) {
        return calculateAllDigitsProduct(std::to_string(n - 1));
    }

    std::string number = std::to_string(n);
    int maxProduct = calculateAllDigitsProduct(number);

    for (int i = number.size() - 1; i > 0; --i) {
        std::string subtract = number.substr(i);
        int newNumber = n - std::stoi(subtract) - 1;
        maxProduct = std::max(calculateAllDigitsProduct(std::to_string(newNumber)), maxProduct);
    }

    return maxProduct;
}

int main() {
    std::cout << solve() << std::endl;
    return 0;
}
