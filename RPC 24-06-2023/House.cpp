#include <iostream>
#include <vector>
#include <string>
#include <sstream>

void house_prices(int n, std::vector<int>& prices, std::vector<std::string>& transactions) {
    std::vector<int> house_prices = prices;

    for (const std::string& transaction : transactions) {
        if (transaction[0] == 'U') {
            std::string action, house_number_str, price_increase_str;
            int house_number, price_increase;
            std::istringstream iss(transaction);
            iss >> action >> house_number_str >> price_increase_str;
            house_number = std::stoi(house_number_str);
            price_increase = std::stoi(price_increase_str);
            house_prices[house_number - 1] += price_increase;
        }
        else if (transaction[0] == 'R') {
            std::string action, start_house_str, end_house_str;
            int start_house, end_house;
            std::istringstream iss(transaction);
            iss >> action >> start_house_str >> end_house_str;
            start_house = std::stoi(start_house_str);
            end_house = std::stoi(end_house_str);
            int total_price = 0;
            for (int i = start_house - 1; i < end_house; ++i) {
                total_price += house_prices[i];
            }
            std::cout << total_price << std::endl;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    int t;
    std::cin >> t;
    std::cin.ignore(); // Ignore newline character after reading t
    std::vector<std::string> transactions(t);
    for (int i = 0; i < t; ++i) {
        std::getline(std::cin, transactions[i]);
    }

    // Solve the problem
    house_prices(n, prices, transactions);

    return 0;
}
