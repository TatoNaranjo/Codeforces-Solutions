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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    v(int,vec);
    vec.pb(a);
    vec.pb(b);
    vec.pb(c);
    sort(vec.begin(),vec.end());
    cout<<max(0,d-(vec[1]-vec[0]))+max(0,d-(vec[2]-vec[1]))<<endl;
return 0;
}
