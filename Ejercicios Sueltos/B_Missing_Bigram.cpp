#include <iostream>
#include <vector>
#include <string>

int main() {
    int t;
    std::cin >> t;
    
    for (int _ = 0; _ < t; ++_) {
        int n;
        std::cin >> n;
        
        std::vector<std::string> s(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> s[i];
        }
        
        for (int i = 0; i < n - 3; ++i) {
            if (s[i][1] != s[i + 1][0]) {
                s.insert(s.begin() + i + 1, std::string(1, s[i][1]) + s[i + 1][0]);
                break;
            }
            else {
                s.push_back(std::string(1, s.back()[1]) + 'a');
            }
        }
        
        std::cout << s[0][0];
        for (int i = 0; i < n - 1; ++i) {
            std::cout << s[i][1];
        }
        std::cout << std::endl;
    }
    
    return 0;
}
