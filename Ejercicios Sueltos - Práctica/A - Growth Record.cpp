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
    int n,m,x,t,d;
    cin>>n>>m>>x>>t>>d;
    int limSup = n;
    int limInf = x;
    int obj = m;
    int temp = obj;
    int altLimSup = t;
    int aumento = d;
    int metros = altLimSup;
    
    if(obj<limInf){
        while(obj!=limInf){
        if(obj>=limInf && obj<=limSup){
            continue;
        }
        else{
            metros-=aumento;
        }
        obj++;
    }
    }
  cout<<metros<<endl;
    
return 0;
}