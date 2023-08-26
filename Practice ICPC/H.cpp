#include <bits/stdc++.h>
#define f(i, a, b) for (int i = a; i < b; i++)
#define fi(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define v(a, b) vector<a> b
#define s(a, b) set<a> b
#define pb push_back
#define fast_io                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        v(ll, vec)(n);
        ll maxi = 0;
        f(i, 0, n)
        {
            cin >> vec[i];
            maxi = max(maxi,vec[i]);
        }
        
        cout << maxi << endl;
        ll q;
        cin >> q;
        while (q--)
        {
            ll x;
            cin >> x;
            ll ind = x;
            while (vec[ind] == 0)
            {
                ind++;
            }

            vec[ind] += vec[x - 1];
            vec[x - 1] = 0;
            //    for(ll g:vec)cout<<g<<" ";
            //    cout<<endl;
            maxi = max(maxi,vec[ind]);
            cout << maxi << endl;
        }
    }
    return 0;
}