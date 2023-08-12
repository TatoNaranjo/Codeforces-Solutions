
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
    string str = ".";
    string t; cin>>t;
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    string c = "aeiouy";
    f(i,0,t.size()){
        if(c.find(t[i])!=string::npos){
            t[i]='.';
        }
        else continue;
    } 
    str+=t;
    cout<<str<<endl;
return 0;
}