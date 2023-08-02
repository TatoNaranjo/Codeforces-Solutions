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
        int n,k;
        cin>>n>>k;

        v(int,vec);
        f(i,0,n*2){
        int x; cin>>x;
        vec.pb(x);
        }

        bool check = true;
 sort(vec.begin(),vec.end());
        f(i,0,n)if((vec[n+i]-vec[i])<k)check=false;

     if(check)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
return 0;
}
