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
    string x = "";
int i = 8;
while(i--){
    string a; cin>>a;
    f(j,0,a.size()){
    if(a[j]!='.')x+=a[j];
    }
}
    cout<<x<<endl;
  }
return 0;
}
