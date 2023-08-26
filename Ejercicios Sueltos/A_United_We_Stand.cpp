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
    v(int,a);
    v(int,b);
    f(i,0,l){
        int x; cin>>x;
        vec.pb(x);
    }
    bool isDivisible = false;
    f(i,0,l){
      isDivisible=false;
        f(j,0,l){
            if(j!=i && vec[j]%vec[i]==0){
              isDivisible = true;
              break;
            }
        }
        if(isDivisible)a.pb(vec[i]);
        else b.pb(vec[i]);

    }
  if(vec.size()==2){
    if(vec[0]==vec[1])cout<<-1<<endl;
    else{
      cout<<1<<" "<<1<<endl;
      cout<<min(vec[0],vec[1])<<endl;
      cout<<max(vec[0],vec[1])<<endl;
    }
  }
  else if(a.size()==0||b.size()==0)cout<<-1<<endl;
    else{
      cout<<a.size()<<" "<<b.size()<<endl;
    for(int g:a)cout<<g<<" ";
    cout<<endl;
        for(int g:b)cout<<g<<" ";
    cout<<endl;
    }
}
return 0;
}
