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

bool isPrime (ll num){
if(num <=1)return false;
for(ll i = 2;i*i<=num;i++)if(num%i==0)return false;
return true;
}


int main(){
  fast_io;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool isSum = 0;
        ll primeNum = 2;
        while(!isSum){
        if(!isPrime(n+primeNum) && isPrime(primeNum)){
            isSum = true;
        }
        else primeNum++;
        }
    cout<<primeNum<<endl;
    }
return 0;
}
