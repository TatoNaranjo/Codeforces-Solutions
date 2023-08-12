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
        int sumEvens = 0;
        int sumOdds = 0;
    f(i,0,l){
        int x; cin>>x;
        if(x%2!=0){
        sumOdds+=x;
        }
        else {
sumEvens+=x;
        }
    }
   
        if(sumEvens%2==0 && sumOdds%2==0 ||sumEvens%2!=0 && sumOdds%2!=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
return 0;
}