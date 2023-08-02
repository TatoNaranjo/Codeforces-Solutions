#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int w = max(n, k) - min(n, k);
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        vector<int> res;
        for (int i = 0; i < n - 1; i++) {
            res.push_back(abs(vec[i] - vec[i + 1]));
        }
        sort(res.begin(), res.end());
        int sum = 0;
        for (int i = 0; i < w; i++) {
            sum += res[i];
        }
        cout << sum << endl;
    }

    return 0;
}
