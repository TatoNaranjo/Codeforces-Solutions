#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define upper(a) transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return toupper(c);});
#define lower(a) transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return tolower(c);});
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define us(a,b) unordered_set<a> b;
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
        string board[10];
        int ans = 0;
        int limiteVert = 0;
        int limiteHor = 0;
        f(i,0,10)cin>>board[i];
        
        f(i,0,10){
            f(j,0,10){
                if(board[i][j]=='X'){
                    if(i>4)limiteVert= abs(i-9); else limiteVert=i;
                    if(j>4)limiteHor= abs(j-9); else limiteHor=j;
                    ans+=min(limiteVert,limiteHor)+1;
                }
            }
        }
        cout<<ans<<endl;
    }
return 0;
}
