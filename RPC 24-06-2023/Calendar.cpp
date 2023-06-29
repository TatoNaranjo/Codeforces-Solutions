#include <iostream>

int main() {
    int d1, m1, y1, n1;
    int d2, m2, y2;


    std::cin >> d1 >> m1 >> y1 >> n1;

    std::cin >> d2 >> m2 >> y2;


    int days1 = (y1 - 1000) * 360 + (m1 - 1) * 30 + d1;

    int days2 = (y2 - 1000) * 360 + (m2 - 1) * 30 + d2;


    int diff = days2 - days1;


    int dayOfWeek = (n1 - 1 + diff) % 7 + 1;

    std::cout << dayOfWeek << std::endl;

    return 0;
}
