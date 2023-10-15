#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());

    int left = 0;
    int right = n - 1;
    int gondola_count = 0;

    while (left <= right) {
        if (weights[left] + weights[right] <= x) {
            left++;
            right--;
        } else {
            right--;
        }
        gondola_count++;
    }

    cout << gondola_count << endl;

    return 0;
}
