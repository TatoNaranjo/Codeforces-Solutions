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
        v(int,vec);
        v(int,inconformes);
        f(i,0,l){
        int x; cin>>x;
        if(x==i+1)inconformes.pb(x);
        vec.pb(x);
        }

        int counter = inconformes.size()/2;
        if(inconformes.size()%2!=0)counter++;

        cout<<counter<<endl;
    }
return 0;
}
