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
      int a,b; cin>>a>>b;
        int x1,x2,y1,y2; cin>>x1>>x2>>y1>>y2;
        int ans = 4;
        if(x1==1||x1==a||x2==1||x2==b||y1==1||y1==a||y2==1||y2==b)ans =3;
        if((x1==1||x1==a)&& (x2==1||x2==b))ans = 2;
        if((y1==1||y1==a)&& (y2==1||y2==b))ans = 2;

        cout<<ans<<endl;

    }
return 0;
}
