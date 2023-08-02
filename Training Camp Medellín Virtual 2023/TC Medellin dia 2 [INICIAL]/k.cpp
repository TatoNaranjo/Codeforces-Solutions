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
        ll t;cin>>t;
        ll a,b,c;
        ll sumA = 0;
        ll sumB = 0;
        ll sumC = 0;
        while(t--){
         cin>>a>>b>>c;
            sumA+=a;
            sumB+=b;
            sumC+=c;
        }
        if(sumA==0 && sumB==0 && sumC==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    return 0;
    }
