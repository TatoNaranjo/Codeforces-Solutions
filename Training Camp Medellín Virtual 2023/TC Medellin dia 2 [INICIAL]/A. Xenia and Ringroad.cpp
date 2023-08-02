#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, m;
    cin >> n >> m;

    long long last = 1;
    long long steps = 0;

    for (int i = 0; i < m; i++) {
        long long x;
        cin >> x;

        if (x >= last) {
            steps += x - last;
        } else {
            steps += (n - last) + x;
        }

        last = x;
    }

    cout << steps << endl;
    return 0;
}
