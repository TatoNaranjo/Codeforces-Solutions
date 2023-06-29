#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back

using namespace std;

int main(){
int n;
cin >> n;
int in[n + 1] = {}, out[n + 1] = {};
for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    out[u]++;
    in[v]++;
}

for (int i = 1; i <= n; i++) {
    if (in[i] == 0) {
        cout << out[i] << ' ';
        return 0;
    }
}
return 0;
}
