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
int m,s,x;
int main(){
    fast_io;
    int t; cin>>t;
    while(t--){
    bool ans = false;
    cin>>m>>s;
    v(int,vec);
    f(i,0,m){
    cin>>x;
    vec.pb(x);
    }
    int sum = 0;
    int i = 1;
    while(sum<s){
      if(find(vec.begin(),vec.end(),i) ==vec.end()){
      sum+=i;
      vec.pb(i);
      }
      i++;
    }


      if(sum==s){
      ans = true;
      sort(vec.begin(),vec.end());
      int j = 1;
      f(i,0,vec.size()){
      if(vec[i]!= j){
       ans = false;
       break;
      }
      j++;
      }
      }
        if(ans)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }


return 0;
}
