#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define ll unsigned long long
#define v(a,b) vector<a> b

using namespace std;

int main(){
int t; cin>>t;
while(t--){
    ll n; cin>>n;
    v(ll,vec);
    vec.push_back(n);
    while(n>1){
        if(n%2==1){
            n = (n-1)/2;
            vec.push_back(n);
        }
        if(n%2==0){
            n = n/2;
            vec.push_back(n);
        }

    }
    ll sum = 0;
    for(ll g:vec){
       sum+=g;
    }

    cout<<sum<<endl;
}

return 0;
}
