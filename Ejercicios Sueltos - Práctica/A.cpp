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
        ll n; cin>>n;
        ll vec[n];
        f(i,0,n){
        cin>>vec[i];

        }

        bool desorganizado = 0;
        f(i,0,n-1){
        if(vec[i]>vec[i+1]){
            desorganizado = 1;
            break;
        }
        }
        if(desorganizado){
            cout<<0<<endl;
            continue;
        }

        ll indB = 0;
        ll diff = 10e9;
        f(i,0,n-1){
        if(vec[i+1]-vec[i]<diff){
            diff = vec[i+1]-vec[i];
            indB=i;
        }
        }
        ll counter = (vec[indB+1]-vec[indB])/2+1;

    cout<<counter<<endl;
    }
return 0;
}
