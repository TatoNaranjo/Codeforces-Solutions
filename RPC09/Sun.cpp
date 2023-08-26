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
    ll a,b,c,d; cin>>a>>b>>c>>d;
   f(i,0,5001){
    if(((i+a)%b) || ((i+c)%d))continue;
    cout<<i<<endl;
    break;
   }
return 0;
}