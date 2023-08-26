#include <bits/stdc++.h>
#define v(a,b) vector<a> b
#define ll long long
#define f(i,a,b) for(int i=a; i<b;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    
    while(t--){
     
        int n; cin>>n;
        v(int,vec)(n);
        f(i,0,n)cin>>vec[i];
        sort(vec.begin(),vec.end());
        ll sum = accumulate (vec.begin(),vec.end(),0ll);
        if(n==1){
            cout<<vec[0]<<endl;
            continue;
        }
        int m = n/2 -1;
        //Expresion Lambda
        auto w = [&] (ll x){
            return x*(n+1)-sum;
        };
        /*End of lambda*/
        if(w(vec[m])<=vec[m])cout<<w(vec[m])<<endl;
        else cout<<w(vec[m+1])<<endl;
    }


    return 0;
}