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
        int l; cin>>l;
        string str; cin>>str;
    ll ans=0;
    v(ll,prefijos) (0,l);
    v(ll,sufix)(0,l);
    s(char,pUnicas);
    f(i,0,l){
        pUnicas.insert(str[i]);
        prefijos[i] = pUnicas.size();
    }
        pUnicas.clear();
        for(int j = l-1;j<=0;j--){
        pUnicas.insert(str[j]);
        sufix[j]=pUnicas.size();
        }
        f(j,0,l-1){
            ans = max(ans,prefijos[j]+sufix[j+1]);
        }
        cout<<ans<<endl;
    }
return 0;
}