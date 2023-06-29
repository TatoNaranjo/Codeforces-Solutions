#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back

using namespace std;

int main(){
int x,y,z; cin>>x>>y>>z;
int c = x*y;
if(c%z==0)cout<<c/z<<endl;
else cout<<(c/z)+1<<endl;

return 0;
}
