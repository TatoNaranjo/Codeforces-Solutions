#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fr(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#include <algorithm>
using namespace std;

ll gcd(ll a,ll b){
if(b==0)return a;
return gcd(b,a%b);
}

ll lcd(ll a, ll b){
ll mcm = 0;
ll x = max(a,b);
ll y = min(a,b);
mcm = (x/gcd(x,y)*y);
return mcm;
}


int main(){
      std::ios::sync_with_stdio(false);
    cin.tie(NULL);
int t; cin>>t;
f(i,0,t){
int n; cin>>n;
ll a = 1;
ll b = 1;
ll Ans = 0;
ll Bns = 0;
bool y = false;
while(y == false){

    fr(j,1,a){
    fr(k,1,b){
    if((lcd(j,k)+gcd(j,k))==n){
        Ans = j;
        Bns = k;
        y = true;
        break;
    }
    }
    }
    a++;
    b++;
}

cout<<1<<" "<<n-1 <<endl;
}

return 0;
}
