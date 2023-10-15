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
        int x,y; cin>>x>>y;
        string a; cin>>a;
        
        v(char,par);
        v(char,impar);
        f(i,0,a.size()){
            if(i%2==0)par.pb((a[i]));
            else impar.pb(a[i]);
        }
        sort(par.begin(),par.end());
        sort(impar.begin(),impar.end());
        string ans1 = "";
        for(int i = 0,j=0;i<par.size()||j<impar.size();i++,j++){
            if(i<par.size()){
                ans1+=par[i];
            }
            if(j<impar.size()){
                ans1+=impar[i];
            }
         }
            if(y%2==0){
                sort(a.begin(),a.end());
                cout<<a<<endl;
                continue;
            }
         
     
           cout<<ans1<<endl;
        }
    
return 0;
}
