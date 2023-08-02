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
    bool ans = false;
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>=10||a+c>=10||b+c>=10)ans=true;

    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }
return 0;
}
