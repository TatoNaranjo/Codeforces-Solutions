#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after reading n

    map<int, vector<char>> positions;

    for (int i = 0; i < n; ++i) {
        string word;
        getline(cin, word);

        for (int j = 0; j < word.length(); ++j) {
            positions[j + 1].push_back(word[j]);
        }
    }

    for (auto& entry : positions) {
        int position = entry.first;
        vector<char>& chars = entry.second;

        sort(chars.begin(), chars.end());

        int maxCount = 0;
        vector<char> maxChars;

        for (int i = 0; i < chars.size();) {
            int count = 1;
            int j = i + 1;

            while (j < chars.size() && chars[j] == chars[i]) {
                ++count;
                ++j;
            }

            if (count > maxCount) {
                maxCount = count;
                maxChars.clear();
                maxChars.push_back(chars[i]);
            }
            else if (count == maxCount) {
                maxChars.push_back(chars[i]);
            }

            i = j;
        }

        cout << position << ": ";
        for (int i = 0; i < maxChars.size(); ++i) {
            cout << maxChars[i];
            if (i < maxChars.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
