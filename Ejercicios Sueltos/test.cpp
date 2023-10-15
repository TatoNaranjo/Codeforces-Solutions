#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    
    while(t--) {
        int x; cin >> x;
      //  bool check = false;
        int ans = x&(-x);
        while(!(x&ans)|| !(x^ans)) {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
