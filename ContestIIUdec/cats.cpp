#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define us(a,b) unordered_set<a> b;
#define lower(a) transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return tolower(c);});
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
        string str; cin>>str;
        //Eliminar caracteres repetidos
        lower(str);
    str.erase(unique(str.begin(),str.end()),str.end());
    if(str == "meow")cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

return 0;
}