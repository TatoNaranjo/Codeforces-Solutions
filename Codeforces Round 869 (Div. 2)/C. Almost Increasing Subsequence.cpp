#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fe(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back
using namespace std;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q; cin >> n >> q;
    vi a(n);
    for(int& i : a) cin >> i;
    vi p(n-1);
    for(int i=1;i<n-1;++i) {
        int downhill = a[i-1]>=a[i] and a[i]>=a[i+1];
        p[i] = p[i-1] + downhill;
    }
    while(q--) {
        int l,r; cin >> l >> r;
        --l,--r;
        if(l==r) {
            cout << "1\n";
        } else {
            int ans = (r-l+1) - p[r-1] + p[l];
            cout << ans << '\n';
        }
    }
}
