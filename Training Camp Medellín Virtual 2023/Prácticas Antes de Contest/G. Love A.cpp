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
    string a; cin>>a;
    int countA = 0;
    f(i,0,a.size()){
    if(a[i]=='a')countA++;
    }
    if(countA>a.size()/2)cout<<a.size()<<endl;
    else{
        v(char,vec);
        countA = 0;
        f(i,0,a.size()){
        vec.pb(a[i]);
        }
    sort(vec.begin(),vec.end());
    int countDif = a.size();
  f(i,0,vec.size()){
            if(vec[i]=='a')countA++;
           else if(vec[i]!='a'){
            countDif--;
           }
         //  cout<<countA<<endl;
          // cout<<vec.size()<<endl;
            if(countA>countDif/2)break;
            }
        cout<<countDif<<endl;

    }
return 0;
}
