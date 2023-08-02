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
  ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        v(ll,vec);
        v(ll,pares);
        v(ll,impares);
        v(ll,nueV);

        f(i,0,n){
        int x; cin>>x;
        vec.pb(x);
        }
        f(i,0,n){
            if(vec[i]%2==0){
             pares.pb(vec[i]);
            }
            else{
            impares.pb(vec[i]);
            }
        }
        sort(pares.begin(),pares.end());
        sort(impares.begin(),impares.end());

         ll par = 0; ll impar = 0;
            f(i,0,n){
            if(vec[i]%2!=0){
                nueV.pb(impares[impar]);
                impar++;

            }
            else{
                nueV.pb(pares[par]);
                par++;
            }
            }
            if(is_sorted(nueV.begin(),nueV.end()))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

    }
return 0;
}
