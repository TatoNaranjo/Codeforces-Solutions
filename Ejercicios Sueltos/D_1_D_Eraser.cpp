#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define upper(a) transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return toupper(c);});
#define lower(a) transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return tolower(c);});
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define us(a,b) unordered_set<a> b;
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
        ll minimun = 0;
        ll a,b;
        string str;
        ll ans = 0;
        cin>>a>>b>>str;
        f(i,0,a){
            if(--minimun>0)continue;
           else if(str[i]=='B'){
                ans++;
                minimun = b;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}
