#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;

    long long count = 0;
    vector<int> cumulativeCounts(s.length() + 1, 0);
    int onesCount = 0;
    cumulativeCounts[0] = 1;


    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            onesCount++;
        }

         if (onesCount >= k) {
            count += cumulativeCounts[onesCount - k];
        }

        cumulativeCounts[onesCount]++;
    }

    cout << count << endl;
    return 0;
}
