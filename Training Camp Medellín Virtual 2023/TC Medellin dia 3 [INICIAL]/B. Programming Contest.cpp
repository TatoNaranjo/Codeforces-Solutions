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
        int yInit,nNoInit;cin>>yInit>>nNoInit;
        s(int,noR);
        f(i,0,nNoInit){
        int x; cin>>x;
        noR.insert(x);
        }
        int yFinal; cin>>yFinal;
        int sum = 1;
        f(i,yInit,yFinal){
        if(noR.find(i)==noR.end())sum++;
        }
        cout<<sum<<endl;
    }
return 0;
}
