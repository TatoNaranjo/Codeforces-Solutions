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
    int x;
  int t; cin>>t;

  while(t--){
  cin>>x;
  int ansA = 0;
  int ansB = 0;
  v(int,vec);
  int ind = 1;
  vec.pb(x%ind);
  ind = 2;
  while(ansA == 0 && ansB==0){
    int a = x%ind;
    f(i,0,vec.size()){
    if(a == i){
            if(ind>i+1){
                ansA = i+1;
                ansB = ind;
                break;
            }
            else{
            ansA = ind;
            ansB = i+1;
            break;
            }

    }
    }

    vec.pb(a);
    ind++;
  }
  cout<<ansA<<" "<<ansB<<endl;
  }
return 0;
}
