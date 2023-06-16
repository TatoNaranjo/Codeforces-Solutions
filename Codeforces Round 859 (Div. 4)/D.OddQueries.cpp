#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long l[n + 1];
        l[0] = 0;
        long r[n + 1];
        r[n] = 0;
        for (int i = 1; i <= n; i++)
            l[i] = l[i - 1] + a[i - 1];
        for (int i = n - 1; i >= 0; i--)
            r[i] = r[i + 1] + a[i];
        while (q--) {
            int u, h, k;
            cin >> u >> h >> k;
            u--;
            long sum = 0L + l[u] + r[h] + (h - u) * 1L * k;
            if (sum % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}