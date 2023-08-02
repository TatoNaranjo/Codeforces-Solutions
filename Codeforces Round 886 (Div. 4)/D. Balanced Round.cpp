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
    int n,k; cin>>n>>k;

    v(int,vec);
    f(i,0,n){
    int x; cin>>x;
    vec.pb(x);
    }
 if(n==1){
        cout<<0<<endl;
        continue;
     }

    sort(vec.begin(),vec.end());
  int counter = 0;
  int res = 0;
  int y = 0;
   bool check = false;
    int checko;

   while(y<n){
        int x = y+1;

   while(x<n){
     if((vec[x]-vec[x-1])>k){
        counter++;
        break;
    }
    x++;
   }
   counter = x-y;
   res = max(res,counter);
   y=x;
    }
    cout<<n-res<<endl;
   }

return 0;
}
