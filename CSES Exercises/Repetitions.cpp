#include <bits/stdc++.h>
#define f(i,a,b) for(ll i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back

using namespace std;

int main(){
string a; cin>>a;
ll ans = 0;

f(i,0,a.size()){
char x = a[i];
ll index = i;
ll counter = 0;
while(a[index]==x){
counter++;
ans = max(counter,ans);
index++;

}

}
cout<<ans<<endl;
return 0;

}
