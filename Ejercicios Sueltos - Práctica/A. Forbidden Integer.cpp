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
    int n,k,x; cin>>n>>k>>x;
    if(k==1 or (n%2==1 and  k==2 and x==1)){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        if(x==1){
            if(n%2==1){
                cout<<n/2<<endl;
                cout<<3<<" ";
                f(i,0,n/2-1){
                cout<<2<<" ";
                }
                cout<<endl;
            }else{
                cout<<n/2<<endl;
                f(i,0,n/2){
                cout<<2<<" ";
                }
                cout<<endl;
            }
            }else{
            cout<<n<<endl;
            f(i,0,n){
            cout<<1<<" ";
            }
            cout<<endl;
            }
        }
    }

return 0;
}
