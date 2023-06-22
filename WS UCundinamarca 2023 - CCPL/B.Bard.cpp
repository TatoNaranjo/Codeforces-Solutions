
#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)
#define fi(i,a,b) for(int i = a; i<=b; i++)
#define ll long long
#define v(a,b) vector<a> b
#define s(a,b) set<a> b
using namespace std;

int main(){

int maxAld; cin>>maxAld;
int maxVec; cin>>maxVec;

vector<set<int>>gente(maxAld+1);


int cuentaBardos = 0;

while(maxVec--){
int l;cin>>l;

v(int,vec)(l);

bool isBard = false;

    for(auto &i: vec){
    cin>>i;
    if(i==1)isBard = true;
    }

    if(isBard){
       for(auto& i: vec)gente[i].insert(cuentaBardos);

        cuentaBardos++;
    }
    else{

    s(int,ald);
    for(auto i:vec){
    for(auto j:gente[i]){
        ald.insert(j);

    }
    }
    for(auto i:vec){
    gente[i] = ald;
    }
    }
}

 fi(i,0,maxAld){
 if(gente[i].size()==cuentaBardos)cout<<i<<endl;
 }
return 0;
}
