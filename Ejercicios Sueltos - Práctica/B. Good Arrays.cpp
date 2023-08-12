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
    int t; cin>>t;
    while(t--){
        int l; cin>>l;
        v(ll,vec);
        ll initSum = 0;
         ll sum2 = 0;
        ll count1 = 0;
        f(i,0,l){
            ll x; cin>>x;
            if(x==1)count1++;
            initSum+=x;
            vec.pb(x);
        }
        if(initSum>=count1+l && l>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        


    }

return 0;
}