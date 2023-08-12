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
    int l; cin>>l;
    v(int,vec);
    int may = 0;
    int ans = 0;    
    f(i,0,l){
        int x; cin>>x;
        may = max(may,x);
        vec.pb(x);
    }
ans = may+1-vec[0]; ans = max(ans,0);
cout<<ans<<endl;
return 0;
}