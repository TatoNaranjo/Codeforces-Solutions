#include <bits/stdc++.h>
#define f(i,a,b) for(int i = a; i<b; i++)

using namespace std;

int main(){

int pPala; cin>>pPala;
int pMoney; cin>>pMoney;
int ans = 0;
f(i,1,11){
if((i*pPala)%10==0 || (i*pPala)%10==pMoney){
    ans = i;
    break;
}
}
cout<<ans<<endl;
return 0;
}
