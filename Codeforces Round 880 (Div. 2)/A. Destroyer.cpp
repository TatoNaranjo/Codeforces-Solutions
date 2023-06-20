#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)

using namespace std;
const int N = 1e6;
int main(){
int t; cin>>t;
for(int i = 0; i<t;i++){
int l; cin>>l;
vector <int> a(l+1);

    f(j,0,l){
    int b; cin>>b;
    if(b<l){
        a[b]++;
    }
    else{
        a[l]= N;
    }
    }
    bool g = true;
    f(k,1,l+1){
    if(a[k]>a[k-1]){
    g = false;
    break;
    }
    }
    if(g)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
