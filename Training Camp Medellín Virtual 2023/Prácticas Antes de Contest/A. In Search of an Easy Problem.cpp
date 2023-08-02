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
int counter = 0;
while(t--){
    int x; cin>>x;
    if(x==1){
        counter++;
    }
}
if(counter>0)cout<<"HARD"<<endl;
else cout<<"EASY"<<endl;
return 0;
}
