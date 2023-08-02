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
       transform(a.begin(), a.end(), a.begin(), ::tolower);
       v(string,vec);

       string temp = "";
       cout<<a<<endl;
       f(i,0,a.size()){

       if(a[i]=='s' && a[i+1]=='s'){
        temp = a;
        temp[i]='B';

        temp.erase(temp.begin()+i+1);
        vec.pb(temp);
       }
       }
       sort(vec.begin(),vec.end());
       for(string g:vec){
        cout<<g<<endl;
       }
return 0;
}
