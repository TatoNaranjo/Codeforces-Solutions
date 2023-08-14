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
    ll h,k,v,s; cin>>h>>k>>v>>s;
    ll units = 0;
    while(h>0){
        v*=s;
       ll decrease = v/10;
       double d = 0;
       if(decrease%10!=0) d = int(floor(decrease));
       v-=max(1.0,d);
        if (v >= k) h += 1;
    if (v>0 && v < k)h -= 1;
    if (h == 0)v = 0;
    if (v <= 0) h = v = 0;
    if (v >= k)
        units = max(units, v);
    if (s > 0) s -= 1;
       
    }
    cout<<units<<endl;
return 0;
}