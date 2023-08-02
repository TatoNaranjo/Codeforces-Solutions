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
    int n,m;
    cin>>n>>m;

    int counter = 0;
    int sum = 0;
    v(int,vec);
    f(i,0,n){
    int x; cin>>x;
    sum+=x;
    vec.pb(x);

    }
  //  cout<<sum<<endl;

    int mini = (sum + (4 * m) - 1) / (4 * m);
    //cout<<mini<<endl;
    f(i,0,n){
    if(vec[i]>=mini)counter++;
    }
    if(counter>=m)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
return 0;
}
