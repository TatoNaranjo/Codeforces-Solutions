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
    v(int,vec);
    while(t--){
        int x; cin>>x;
        vec.pb(x);
    }
    int ans = 0;
    v(int,temp);
    f(i,0,t-1){
        
    if(find(temp.begin(),temp.end(),vec[i])==temp.end() && vec[i+1]!=vec[i]){
        ans++;
        temp.pb(vec[i]);
    }     
    else{
        continue;
    }
    }
    cout<<ans<<endl;
return 0;
}