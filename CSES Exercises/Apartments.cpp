#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> desired_sizes(n);
    vector<int> apartment_sizes(m);

    for (int i = 0; i < n; ++i) {
        cin >> desired_sizes[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> apartment_sizes[i];
    }

    sort(desired_sizes.begin(), desired_sizes.end());
    sort(apartment_sizes.begin(), apartment_sizes.end());

    int applicants = 0;
    int d_ptr = 0;
    int a_ptr = 0;

    while (d_ptr < n && a_ptr < m) {
        int diff = abs(desired_sizes[d_ptr] - apartment_sizes[a_ptr]);
        if (diff <= k) {
            applicants++;
            d_ptr++;
            a_ptr++;
        } else if (desired_sizes[d_ptr] < apartment_sizes[a_ptr]) {
            d_ptr++;
        } else {
            a_ptr++;
        }
    }

    cout << applicants << endl;

    return 0;
}
