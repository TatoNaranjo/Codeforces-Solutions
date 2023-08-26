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
        v(int,vec) (l);
        bool countOnes = 0;
        int counter = 0;
        int totalSum = 0;
        f(i,0,l) {
        cin>>vec[i];
        if(vec[i]==1)counter++;
        }
        if(counter ==l)countOnes=1;
    
          if(countOnes){
            vec[0] =-1;
            vec[1]=-1;
          }
          else{
        f(i,0,l-1){
            if(vec[i]==-1 && vec[i+1]==-1){
            vec[i]=1;
            vec[i+1]=1;
            break;
        }
        }
        }
    //    for(int g:vec)cout<<g<<" ";
      //  cout<<endl;
        
        f(i,0,l){
             totalSum+=vec[i];
        }
        cout<<totalSum<<endl;
    }
return 0;
}
