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
        int moves = 0;
        v(int,vec1);v(int,vec2);
        f(i,0,l){
            int x; cin>>x;
            vec1.pb(x);
        }
        f(i,0,l){
            int x; cin>>x;
            vec2.pb(x);
        }
        while(true){
        f(i,0,l){
            if(vec1[i]!=vec2[i]){
                f(j,0,l){
                    if(vec2[j]==vec1[i]){
                    vec2.erase(vec2.begin()+j);
                    break;
                    }
                }
                vec1.erase(vec1.begin()+i);
                moves+=2;
                break;
            }
        }
          int counter = 0;
            f(j,0,vec1.size()){
                if(vec1[j]==vec2[j]){
                    counter++;
                }
            }
        if (counter==vec1.size())break;
        }
    cout<<moves<<endl;
    }
return 0;
}