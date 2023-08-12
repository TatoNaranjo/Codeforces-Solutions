
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
        bool isSorted = false;
        int count = 0;
        f(i,0,l){
            int x; cin>>x;
            vec.pb(x);
        }
       
        if(is_sorted(vec.begin(),vec.end())){
            cout<<0<<endl;
            continue;
        }else{
            while(!isSorted){
                      f(i,1,l)if(vec[i]>vec[i-1])count++;
        if (count==l){
            isSorted = 1;
            break;
        }
        f(i,0,l){
            
        }
            }
        }



    }
return 0;
}