#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back
#define fast_io                                                                \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

int main(){
  fast_io;
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
          ll a,b;
          ll mini = 0;
          ll maxi = INT_MIN;
        f(i,0,n){
            cin>>a>>b;
            mini+= min(a,b);
            maxi = max(maxi,max(a,b));
        }
        cout<<2*(maxi+mini)<<endl;

    }
return 0;
}
