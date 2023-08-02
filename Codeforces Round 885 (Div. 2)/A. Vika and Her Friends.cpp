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
int n,m,x,y,num;
int main(){
  fast_io;
    int t; cin>>t;
    while(t--){
        cin>>n>>m>>num>>x>>y;
        bool isTrue = false;
        f(i,0,num){
        int a,b;
        cin>>a>>b;
        if((abs(x-a)+ abs(y-b))%2==0)
          isTrue = true;
        }
        if(!isTrue)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
