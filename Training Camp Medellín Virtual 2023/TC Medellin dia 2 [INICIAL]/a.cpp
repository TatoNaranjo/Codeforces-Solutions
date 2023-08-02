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
      int n; cin>>n;
      v(int,a);
      v(int,b);
      int counter = 0;
      f(i,0,n){
        int x; cin>>x;
        a.pb(x);
        cin>>x;
        b.pb(x);
      if(a[i]>b[i])counter++;
      }
        cout<<counter<<endl;
    }
return 0;
}
