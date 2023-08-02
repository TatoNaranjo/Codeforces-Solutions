#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> vec(n);
        int zero = 0;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            if (vec[i] == 0)
                zero++;
        }

        if (n == m)
            cout << "Richman" << endl;
        else if (zero > m)
            cout << "Impossible" << endl;
        else {
            m -= zero;
            long long sum = 0;
            int i;
            for (i = 0; m > 0; i++) {
                if (vec[i] == 0)
                    continue;
                sum += vec[i];
                m--;
            }

            int minPrice = 1e9;
            for (; i < n; i++) {
                if (vec[i] > 0)
                    minPrice = min(minPrice, vec[i]);
            }

            cout << sum + minPrice - 1 << endl;
        }
    }

    return 0;
}
