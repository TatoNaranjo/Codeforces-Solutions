#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> unread(n, 0);
    int unreadCount = 0;

    for (int i = 0; i < q; i++) {
        int type;
        std::cin >> type;

        if (type == 1) {
            int x;
            std::cin >> x;
            unread[x-1]++;
            unreadCount++;
        } else if (type == 2) {
            int x;
            std::cin >> x;
            int decrease = std::min(unread[x-1], unreadCount);
            unread[x-1] -= decrease;
            unreadCount -= decrease;
        } else if (type == 3) {
            int t;
            std::cin >> t;
            unreadCount -= t;
        }

        std::cout << unreadCount << "\n";
    }

    return 0;
}
