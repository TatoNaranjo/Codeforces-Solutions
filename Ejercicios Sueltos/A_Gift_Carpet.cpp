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
        int n,m; cin>>n>>m;
        v(string,vec);
    f(i,0,n){
        string x;cin>>x;
        vec.pb(x);
    }
    int index = 0;
   char ans[] ={'v','i','k','a'};
    f(i,0,m){
        f(j,0,n){
            if(vec[j][i]==ans[index]){
                index++;
                break;
            }
        }
    }
    if(index==4)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
return 0;
}
