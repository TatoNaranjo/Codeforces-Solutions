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
        bool check;
        int countQ = 0;
        int countA = 0;
        string a; cin>>a;
       f(i,0,l){
        if(a[i]=='Q'){
          countQ++;
          }

        
        if(a[i]=='A' && countQ!=0){
          countQ--;
        }
      //  cout<<countQ<<endl;  
       }
      // cout<<countQ<<endl;
       if(countQ<=0)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
        

    }
return 0;
}