#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define fe(t,vec) for(t g:vec)cout<<g<<" "
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
       v(int,a);
       v(int,b);
       int l; cin>>l;       
       f(i,0,l){
        int x; cin>>x;
        a.pb(x);
       }
         f(i,0,l){
        int x; cin>>x;
        b.pb(x);
       }
       ll ans = 0;
        f(i,1,l){
            if((abs(a[i-1]-a[i])+abs(b[i-1]-b[i]))>(abs(a[i-1]-b[i])+abs(b[i-1]-a[i]))){
                swap(a[i],b[i]);
            }
             ans+=(abs(a[i-1]-a[i])+abs(b[i-1]-b[i]));
        }
  //   cout<<"Respuesta: "<<minsum<<endl;


       

     cout<<ans<<endl;
    }
return 0;
}