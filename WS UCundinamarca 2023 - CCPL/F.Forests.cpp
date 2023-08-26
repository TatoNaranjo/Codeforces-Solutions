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
    int p,t,pe,tr; cin>>p>>t;
    s(int,st)[p];
    while(cin>>pe>>tr){
        st[pe-1].insert(tr);
    }
    set<set<int>>opiniones;
    for(auto&e:st){
        opiniones.insert(e);
    }
    cout<<opiniones.size()<<endl;

return 0;
}
