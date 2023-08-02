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
        int n,m,k,h;
        cin>>n>>m>>k>>h;
        v(int,vec);
        fi(i,1,m){
        vec.pb(i*k);
        }
        int dif = 0;
        int counter = 0;
        //Imp People
        while(n--){
            int x; cin>>x;
            dif = max(h,x)-min(h,x);
            bool check = false;
            f(i,0,vec.size()){
            f(j,0,vec.size()){
            if(i!=j && max(vec[i],vec[j])-min(vec[i],vec[j])==dif){
                counter++;
                check = true;
                break;
            }
            }
            if(check)break;
            }
        }
        cout<<counter<<endl;
    }
return 0;
}
