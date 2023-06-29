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
   int l; cin>>l;
   int vec[l];
   f(i,0,l){
   int x; cin>>x;
   vec[i]= x;
   }
    int counter = 0;
    f(i,0,l-1){
    int contador = 0;
    f(j,i+1,l){
    if(vec[j]-vec[j-1]==i+1){
        swap(vec[j],vec[j-1]);
        i--;
        contador++;
    }
    }
    if(contador>0)counter++;
    }

    for(int g: vec)cout<<g<<" ";
    cout<<endl;
    cout<<counter<<endl;
}
return 0;
}
