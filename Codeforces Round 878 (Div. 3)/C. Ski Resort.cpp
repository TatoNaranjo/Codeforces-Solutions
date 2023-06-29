#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
#define pb push_back

using namespace std;

int main(){
int t; cin>>t;
while(t--){
    int d,md,mt; cin>>d>>md>>mt;
    int countMin = 0;
    v(int,vac);
    f(i,0,d){
    int x; cin>>x;
    if(x<=mt)countMin++;
    vac.push_back(x);
    }

    if(countMin<md)cout<<0<<endl;

    else{
        int ans = 0;

        f(i,0,d){
            countMin = 0;
            f(j,i,d){
            if(vac[j]<=mt){countMin++;
            if(countMin>=md)ans++;
            }
            else break;
            }
        }
    cout<<ans<<endl;
    }
}

return 0;
}
